
rem *** Animations ***
animationSystem.createAnimation Objects/Weapons/HandHeld/AT_mine/Animations/3p/3p_at_mine_crouchBackward.baf
animationSystem.createAnimation Objects/Weapons/HandHeld/AT_mine/Animations/3p/3p_at_mine_crouchForward.baf
animationSystem.createAnimation Objects/Weapons/HandHeld/AT_mine/Animations/3p/3p_at_mine_crouchStill.baf
animationSystem.createAnimation Objects/Weapons/Handheld/AT_mine/Animations/3p/3p_at_mine_crouchStrafeLeft.baf
animationSystem.createAnimation Objects/Weapons/Handheld/AT_mine/Animations/3p/3p_at_mine_crouchStrafeRight.baf
animationSystem.createAnimation Objects/Weapons/Handheld/AT_mine/Animations/3p/3p_at_mine_crouchTurnLeft.baf
animationSystem.createAnimation Objects/Weapons/Handheld/AT_mine/Animations/3p/3p_at_mine_crouchTurnRight.baf
animationSystem.createAnimation Objects/Weapons/Handheld/at_mine/Animations/3p/3p_at_mine_Idle1.baf
animationManager.looping 0
animationManager.ignoreMotherOrientation 12
animationSystem.createAnimation Objects/Weapons/HandHeld/AT_mine/Animations/3p/3p_at_mine_proneBackward.baf
animationSystem.createAnimation Objects/Weapons/HandHeld/AT_mine/Animations/3p/3p_at_mine_proneDeploy.baf
animationManager.looping 0
animationManager.ignoreMotherOrientation 12
animationSystem.createAnimation Objects/Weapons/HandHeld/AT_mine/Animations/3p/3p_at_mine_proneFire.baf
animationManager.looping 0
animationManager.ignoreMotherOrientation 12
animationSystem.createAnimation Objects/Weapons/HandHeld/AT_mine/Animations/3p/3p_at_mine_proneForward.baf
animationSystem.createAnimation Objects/Weapons/HandHeld/AT_mine/Animations/3p/3p_at_mine_proneStill.baf
animationSystem.createAnimation Objects/Weapons/Handheld/AT_mine/Animations/3p/3p_at_mine_proneStrafeLeft.baf
animationSystem.createAnimation Objects/Weapons/Handheld/AT_mine/Animations/3p/3p_at_mine_proneStrafeRight.baf
animationSystem.createAnimation Objects/Weapons/HandHeld/AT_mine/Animations/3p/3p_at_mine_runBackward.baf
animationSystem.createAnimation Objects/Weapons/HandHeld/AT_mine/Animations/3p/3p_at_mine_runBackwardToProne.baf
animationManager.looping 0
animationSystem.createAnimation Objects/Weapons/HandHeld/AT_mine/Animations/3p/3p_at_mine_runForward.baf
animationSystem.createAnimation Objects/Weapons/HandHeld/AT_mine/Animations/3p/3p_at_mine_runForwardToProne.baf
animationManager.looping 0
animationSystem.createAnimation Objects/Weapons/HandHeld/AT_mine/Animations/3p/3p_at_mine_sprint.baf
animationSystem.createAnimation Objects/Weapons/HandHeld/AT_mine/Animations/3p/3p_at_mine_stand.baf
animationManager.ignoreMotherOrientation 12
animationSystem.createAnimation Objects/Weapons/HandHeld/AT_mine/Animations/3p/3p_at_mine_standDeploy.baf
animationManager.looping 0
animationManager.ignoreMotherOrientation 12
animationSystem.createAnimation Objects/Weapons/Handheld/AT_mine/Animations/3p/3p_at_mine_standFire.baf
animationManager.looping 0
animationManager.ignoreMotherOrientation 12
animationSystem.createAnimation Objects/Weapons/HandHeld/AT_mine/Animations/3p/3p_at_mine_standToProne.baf
animationManager.looping 0
animationSystem.createAnimation Objects/Weapons/Handheld/AT_mine/Animations/3p/3p_at_mine_standTurnLeft.baf
animationManager.ignoreMotherOrientation 12
animationSystem.createAnimation Objects/Weapons/Handheld/AT_mine/Animations/3p/3p_at_mine_standTurnRight.baf
animationManager.ignoreMotherOrientation 12
animationSystem.createAnimation Objects/Weapons/HandHeld/AT_mine/Animations/3p/3p_at_mine_strafeLeft.baf
animationSystem.createAnimation Objects/Weapons/Handheld/AT_mine/Animations/3p/3p_at_mine_strafeLeftToProne.baf
animationManager.looping 0
animationSystem.createAnimation Objects/Weapons/HandHeld/AT_mine/Animations/3p/3p_at_mine_strafeRight.baf
animationSystem.createAnimation Objects/Weapons/Handheld/AT_mine/Animations/3p/3p_at_mine_strafeRightToProne.baf
animationManager.looping 0
animationSystem.createAnimation Objects/Weapons/Handheld/AT_mine/Animations/3p/3p_at_mine_walkBackward.baf
animationSystem.createAnimation Objects/Weapons/Handheld/AT_mine/Animations/3p/3p_at_mine_walkForward.baf
animationSystem.createAnimation Objects/Weapons/Handheld/AT_mine/Animations/3p/3p_at_mine_walkLeft.baf
animationSystem.createAnimation Objects/Weapons/Handheld/AT_mine/Animations/3p/3p_at_mine_walkRight.baf

rem *** Bundles ***
animationSystem.createBundle backwardToProne
animationBundle.isLooping 0
animationBundle.fadeInTime 0.1
animationBundle.addAnimation Objects/Weapons/HandHeld/AT_mine/Animations/3p/3p_at_mine_runBackwardToProne.baf

animationSystem.createBundle crouch_move
animationBundle.fadeOutTime 0.2
animationBundle.addAnimation Objects/Weapons/Handheld/AT_mine/Animations/3p/3p_at_mine_crouchStrafeLeft.baf
animationBundle.addAnimation Objects/Weapons/Handheld/AT_mine/Animations/3p/3p_at_mine_crouchStrafeRight.baf
animationBundle.addAnimation Objects/Weapons/HandHeld/AT_mine/Animations/3p/3p_at_mine_crouchBackward.baf
animationBundle.addAnimation Objects/Weapons/HandHeld/AT_mine/Animations/3p/3p_at_mine_crouchForward.baf

animationSystem.createBundle crouch_reload
animationBundle.isLooping 0
animationBundle.fadeInTime 0
animationBundle.fadeOutTime 0.2
animationBundle.addAnimation Objects/Weapons/HandHeld/AT_mine/Animations/3p/3p_at_mine_standDeploy.baf

animationSystem.createBundle crouch_still
animationBundle.addAnimation Objects/Weapons/HandHeld/AT_mine/Animations/3p/3p_at_mine_crouchStill.baf

animationSystem.createBundle crouch_turnLeft
animationBundle.fadeInTime 0.1
animationBundle.fadeOutTime 0.4
animationBundle.addAnimation Objects/Weapons/Handheld/AT_mine/Animations/3p/3p_at_mine_crouchTurnLeft.baf

animationSystem.createBundle crouch_turnRight
animationBundle.fadeInTime 0.1
animationBundle.fadeOutTime 0.4
animationBundle.addAnimation Objects/Weapons/Handheld/AT_mine/Animations/3p/3p_at_mine_crouchTurnRight.baf

animationSystem.createBundle forwardToProne
animationBundle.isLooping 0
animationBundle.fadeInTime 0.1
animationBundle.addAnimation Objects/Weapons/HandHeld/AT_mine/Animations/3p/3p_at_mine_runForwardToProne.baf

animationSystem.createBundle hit
animationBundle.isLooping 0
animationBundle.fadeInTime 0.1

animationSystem.createBundle leftToProne
animationBundle.isLooping 0
animationBundle.fadeInTime 0.1
animationBundle.addAnimation Objects/Weapons/Handheld/AT_mine/Animations/3p/3p_at_mine_strafeLeftToProne.baf

animationSystem.createBundle prone_fire
animationBundle.isLooping 0
animationBundle.abruptPlayback 1
animationBundle.fadeInTime 0.01
animationBundle.fadeOutTime 0.01
animationBundle.addAnimation Objects/Weapons/HandHeld/AT_mine/Animations/3p/3p_at_mine_proneFire.baf

animationSystem.createBundle prone_move
animationBundle.fadeOutTime 0.2
animationBundle.addAnimation Objects/Weapons/Handheld/AT_mine/Animations/3p/3p_at_mine_proneStrafeLeft.baf
animationBundle.addAnimation Objects/Weapons/Handheld/AT_mine/Animations/3p/3p_at_mine_proneStrafeRight.baf
animationBundle.addAnimation Objects/Weapons/HandHeld/AT_mine/Animations/3p/3p_at_mine_proneBackward.baf
animationBundle.addAnimation Objects/Weapons/HandHeld/AT_mine/Animations/3p/3p_at_mine_proneForward.baf

animationSystem.createBundle prone_reload
animationBundle.isLooping 0
animationBundle.fadeInTime 0
animationBundle.fadeOutTime 0.2
animationBundle.addAnimation Objects/Weapons/HandHeld/AT_mine/Animations/3p/3p_at_mine_proneDeploy.baf

animationSystem.createBundle prone_still
animationBundle.addAnimation Objects/Weapons/HandHeld/AT_mine/Animations/3p/3p_at_mine_proneStill.baf

animationSystem.createBundle prone_turnLeft
animationBundle.playBackward 1
animationBundle.fadeInTime 0.1
animationBundle.fadeOutTime 0.3
animationBundle.addAnimation Objects/Weapons/Handheld/AT_mine/Animations/3p/3p_at_mine_proneStrafeLeft.baf

animationSystem.createBundle prone_turnRight
animationBundle.fadeInTime 0.1
animationBundle.fadeOutTime 0.3
animationBundle.addAnimation Objects/Weapons/Handheld/AT_mine/Animations/3p/3p_at_mine_proneStrafeRight.baf

animationSystem.createBundle proneDeploy
animationBundle.isLooping 0
animationBundle.fadeInTime 0
animationBundle.addAnimation Objects/Weapons/HandHeld/AT_mine/Animations/3p/3p_at_mine_proneDeploy.baf

animationSystem.createBundle proneToStill
animationBundle.isLooping 0
animationBundle.playBackward 1
animationBundle.fadeInTime 0.1
animationBundle.addAnimation Objects/Weapons/HandHeld/AT_mine/Animations/3p/3p_at_mine_standToProne.baf

animationSystem.createBundle rightToProne
animationBundle.isLooping 0
animationBundle.fadeInTime 0.1
animationBundle.addAnimation Objects/Weapons/Handheld/AT_mine/Animations/3p/3p_at_mine_strafeRightToProne.baf

animationSystem.createBundle stand_fire
animationBundle.isLooping 0
animationBundle.abruptPlayback 1
animationBundle.fadeInTime 0.01
animationBundle.fadeOutTime 0
animationBundle.addAnimation Objects/Weapons/Handheld/AT_mine/Animations/3p/3p_at_mine_standFire.baf

animationSystem.createBundle stand_Idle1
animationBundle.isLooping 0
animationBundle.fadeOutTime 0.2
animationBundle.addAnimation Objects/Weapons/Handheld/at_mine/Animations/3p/3p_at_mine_Idle1.baf

animationSystem.createBundle stand_reload
animationBundle.isLooping 0
animationBundle.fadeInTime 0
animationBundle.fadeOutTime 0.2
animationBundle.addAnimation Objects/Weapons/HandHeld/AT_mine/Animations/3p/3p_at_mine_standDeploy.baf

animationSystem.createBundle stand_run
animationBundle.fadeInTime 0.1
animationBundle.fadeOutTime 0.2
animationBundle.addAnimation Objects/Weapons/HandHeld/AT_mine/Animations/3p/3p_at_mine_strafeLeft.baf
animationBundle.addAnimation Objects/Weapons/HandHeld/AT_mine/Animations/3p/3p_at_mine_strafeRight.baf
animationBundle.addAnimation Objects/Weapons/HandHeld/AT_mine/Animations/3p/3p_at_mine_runBackward.baf
animationBundle.addAnimation Objects/Weapons/HandHeld/AT_mine/Animations/3p/3p_at_mine_runForward.baf

animationSystem.createBundle stand_sprint
animationBundle.fadeOutTime 0.2
animationBundle.addAnimation Objects/Weapons/HandHeld/AT_mine/Animations/3p/3p_at_mine_sprint.baf

animationSystem.createBundle stand_still
animationBundle.addAnimation Objects/Weapons/HandHeld/AT_mine/Animations/3p/3p_at_mine_stand.baf

animationSystem.createBundle stand_turnLeft
animationBundle.fadeInTime 0.1
animationBundle.fadeOutTime 0.3
animationBundle.addAnimation Objects/Weapons/Handheld/AT_mine/Animations/3p/3p_at_mine_standTurnLeft.baf

animationSystem.createBundle stand_turnRight
animationBundle.fadeInTime 0.1
animationBundle.fadeOutTime 0.3
animationBundle.addAnimation Objects/Weapons/Handheld/AT_mine/Animations/3p/3p_at_mine_standTurnRight.baf

animationSystem.createBundle stand_walk
animationBundle.fadeInTime 0.4
animationBundle.fadeOutTime 0.2
animationBundle.addAnimation Objects/Weapons/Handheld/AT_mine/Animations/3p/3p_at_mine_walkLeft.baf
animationBundle.addAnimation Objects/Weapons/Handheld/AT_mine/Animations/3p/3p_at_mine_walkRight.baf
animationBundle.addAnimation Objects/Weapons/Handheld/AT_mine/Animations/3p/3p_at_mine_walkBackward.baf
animationBundle.addAnimation Objects/Weapons/Handheld/AT_mine/Animations/3p/3p_at_mine_walkForward.baf

animationSystem.createBundle standDeploy
animationBundle.isLooping 0
animationBundle.fadeInTime 0
animationBundle.fadeOutTime 0.2
animationBundle.addAnimation Objects/Weapons/HandHeld/AT_mine/Animations/3p/3p_at_mine_standDeploy.baf

animationSystem.createBundle stillToProne
animationBundle.isLooping 0
animationBundle.addAnimation Objects/Weapons/HandHeld/AT_mine/Animations/3p/3p_at_mine_standToProne.baf


rem *** Triggers ***
animationSystem.createTrigger RandomTrigger rnd_stand_idle
animationTrigger.addBundle stand_Idle1

animationSystem.createTrigger IdleTrigger stand_idle
animationTrigger.addChild rnd_stand_idle
animationTrigger.idleTime 5/15

animationSystem.createTrigger TurnTrigger stand_turnLeft
animationTrigger.addBundle stand_turnLeft
animationTrigger.valueHolder 3p_turnLeft

animationSystem.createTrigger TurnTrigger stand_turnRight
animationTrigger.addBundle stand_turnRight
animationTrigger.valueHolder 3p_turnRight

animationSystem.createTrigger Trigger stand_turn
animationTrigger.addChild stand_turnLeft
animationTrigger.addChild stand_turnRight

animationSystem.createTrigger MovementTrigger stand_still
animationTrigger.addChild stand_idle
animationTrigger.addChild stand_turn
animationTrigger.addBundle stand_still
animationTrigger.valueHolder 3p_still

animationSystem.createTrigger MovementTrigger stand_walk
animationTrigger.addBundle stand_walk
animationTrigger.valueHolder 3p_stand_walk

animationSystem.createTrigger MovementTrigger stand_run
animationTrigger.addBundle stand_run
animationTrigger.valueHolder 3p_stand_run

animationSystem.createTrigger ForwardTrigger stand_sprint
animationTrigger.addBundle stand_sprint
animationTrigger.valueHolder 3p_sprint

animationSystem.createTrigger MessageTrigger stand_fire
animationTrigger.addBundle stand_fire
animationTrigger.message 1

animationSystem.createTrigger MessageTrigger stand_reload
animationTrigger.addBundle stand_reload
animationTrigger.message 2

animationSystem.createTrigger Trigger stand
animationTrigger.fadeInTime 0.3
animationTrigger.addChild stand_still
animationTrigger.addChild stand_walk
animationTrigger.addChild stand_run
animationTrigger.addChild stand_sprint
animationTrigger.addChild stand_fire
animationTrigger.addChild stand_reload

animationSystem.createTrigger TurnTrigger crouch_turnLeft
animationTrigger.addBundle crouch_turnLeft
animationTrigger.valueHolder 3p_turnLeft

animationSystem.createTrigger TurnTrigger crouch_turnRight
animationTrigger.addBundle crouch_turnRight
animationTrigger.valueHolder 3p_turnRight

animationSystem.createTrigger TurnTrigger crouch_turn
animationTrigger.addChild crouch_turnLeft
animationTrigger.addChild crouch_turnRight

animationSystem.createTrigger MovementTrigger crouch_still
animationTrigger.addChild crouch_turn
animationTrigger.addBundle crouch_still
animationTrigger.valueHolder 3p_still

animationSystem.createTrigger MovementTrigger crouch_move
animationTrigger.addBundle crouch_move
animationTrigger.valueHolder 3p_crouch_move

animationSystem.createTrigger MessageTrigger crouch_fire
animationTrigger.addBundle stand_fire
animationTrigger.message 1

animationSystem.createTrigger MessageTrigger crouch_reload
animationTrigger.addBundle crouch_reload
animationTrigger.message 2

animationSystem.createTrigger Trigger crouch
animationTrigger.fadeInTime 0.3
animationTrigger.addChild crouch_still
animationTrigger.addChild crouch_move
animationTrigger.addChild crouch_fire
animationTrigger.addChild crouch_reload

animationSystem.createTrigger TurnTrigger prone_turnLeft
animationTrigger.addBundle prone_turnLeft
animationTrigger.valueHolder 3p_prone_turnLeft

animationSystem.createTrigger TurnTrigger prone_turnRight
animationTrigger.addBundle prone_turnRight
animationTrigger.valueHolder 3p_prone_turnRight

animationSystem.createTrigger TurnTrigger prone_turn
animationTrigger.addChild prone_turnLeft
animationTrigger.addChild prone_turnRight

animationSystem.createTrigger MovementTrigger prone_still
animationTrigger.addChild prone_turn
animationTrigger.addBundle prone_still
animationTrigger.valueHolder 3p_still

animationSystem.createTrigger MovementTrigger prone_move
animationTrigger.addBundle prone_move
animationTrigger.valueHolder 3p_prone_move

animationSystem.createTrigger MessageTrigger prone_fire
animationTrigger.addBundle prone_fire
animationTrigger.message 1

animationSystem.createTrigger MessageTrigger prone_reload
animationTrigger.addBundle prone_reload
animationTrigger.message 2

animationSystem.createTrigger Trigger prone
animationTrigger.fadeInTime 0.3
animationTrigger.addChild prone_still
animationTrigger.addChild prone_move
animationTrigger.addChild prone_fire
animationTrigger.addChild prone_reload

animationSystem.createTrigger PoseTrigger root
animationTrigger.addChild stand
animationTrigger.addChild crouch
animationTrigger.addChild prone

animationSystem.createTrigger Trigger fromProne
animationTrigger.addBundle proneToStill

animationSystem.createTrigger Trigger stillToProne
animationTrigger.addBundle stillToProne

animationSystem.createTrigger Trigger forwardToProne
animationTrigger.addBundle forwardToProne

animationSystem.createTrigger Trigger backwardToProne
animationTrigger.addBundle backwardToProne

animationSystem.createTrigger Trigger leftToProne
animationTrigger.addBundle leftToProne

animationSystem.createTrigger Trigger rightToProne
animationTrigger.addBundle rightToProne

animationSystem.createTrigger Trigger specialMoves
animationTrigger.addChild fromProne
animationTrigger.addChild stillToProne
animationTrigger.addChild forwardToProne
animationTrigger.addChild backwardToProne
animationTrigger.addChild leftToProne
animationTrigger.addChild rightToProne

animationSystem.createTrigger Trigger hit
animationTrigger.addBundle hit

animationSystem.createTrigger Trigger standDeploy
animationTrigger.addBundle standDeploy

animationSystem.createTrigger Trigger crouchDeploy
animationTrigger.addBundle standDeploy

animationSystem.createTrigger Trigger proneDeploy
animationTrigger.addBundle proneDeploy

animationSystem.createTrigger PoseTrigger startup
animationTrigger.addChild standDeploy
animationTrigger.addChild crouchDeploy
animationTrigger.addChild proneDeploy

animationSystem.createTrigger Trigger completeTree
animationTrigger.addChild root
animationTrigger.addChild specialMoves
animationTrigger.addChild hit
animationTrigger.addChild startup
