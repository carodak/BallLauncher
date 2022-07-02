using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem; // We will need some classes on this namespace
using UnityEngine.InputSystem.EnhancedTouch;
using Touch = UnityEngine.InputSystem.EnhancedTouch.Touch;

public class BallHandler : MonoBehaviour
{
    [SerializeField] private GameObject ballPrefab;
    [SerializeField] private Rigidbody2D pivot;
    [SerializeField] private float detachDelay;
    [SerializeField] private float respawnDelay;
    private Rigidbody2D currentBallRigidbody;
    private SpringJoint2D currentBallSprintJoint;

    private Camera mainCamera;
    private bool isDragging; // Check if we are dragging the ball or not

    // Start is called before the first frame update
    void Start()
    {
        mainCamera = Camera.main; //the first enabled camera tagged "MainCamera"
        SpawnNewBall();
    }

    void OnEnable() {
        EnhancedTouchSupport.Enable();
    }

    void OnDisable() {
        EnhancedTouchSupport.Disable();
    }

    // Update is called once per frame
    void Update()
    {
        if (currentBallRigidbody == null) {return;}
        if(Touch.activeTouches.Count == 0){ //if we are not touching the screen
            if(isDragging){
                LaunchBall();
            }
            isDragging = false;
          
            return;
        }

        isDragging = true;

        currentBallRigidbody.isKinematic = true; //ball won't react to physics

        Vector2 touchPosition = new Vector2();

        foreach(Touch touch in Touch.activeTouches){ //multi touches
            touchPosition += touch.screenPosition;
        }

        touchPosition /= Touch.activeTouches.Count;
        
        Vector3 worldPosition = mainCamera.ScreenToWorldPoint(touchPosition);//read the position where we touched, we'll need to convert this pixel position into the units of the game
        
        currentBallRigidbody.position = worldPosition;
    
    }

    private void SpawnNewBall(){
        GameObject ballInstance = Instantiate(ballPrefab, pivot.position,Quaternion.identity);

        currentBallRigidbody = ballInstance.GetComponent<Rigidbody2D>();
        currentBallSprintJoint = ballInstance.GetComponent<SpringJoint2D>();

        currentBallSprintJoint.connectedBody = pivot;
    }

    private void LaunchBall(){
        currentBallRigidbody.isKinematic = false; // ball will react to physics again
        currentBallRigidbody = null; // clear the rigidbody so we can't reset the position by touching the screen again
          
        Invoke(nameof(DetachBall), detachDelay); //nameof will give the name of the method and will produce an error if we made a typo
    }

    private void DetachBall(){
        currentBallSprintJoint.enabled = false; // avoid the ball to bounce back and forth
        currentBallSprintJoint = null;

        Invoke(nameof(SpawnNewBall), respawnDelay);
    }
}
