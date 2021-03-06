animationSystem.cameraSpring.use 1
animationSystem.cameraSpring.amplitude 0.02/0.01/0.045
animationSystem.cameraSpring.zoomDamping 2.5/2.5/0
animationSystem.cameraSpring.stiffness 10/10/10
animationSystem.cameraSpring.move 2/2/2
animationSystem.cameraSpring.look 1/1
animationSystem.cameraSpring.fire 0/0/150

rem *** Animations ***
animationSystem.createAnimation Objects/Weapons/Handheld/knife_unlock/Animations/1p/1p_knife_unlock_attack03.baf
animationManager.looping 0
animationManager.length 0.8
animationSystem.createAnimation Objects/Weapons/Handheld/knife_unlock/Animations/1p/1p_knife_unlock_attack04.baf
animationManager.looping 0
animationManager.length 0.8
animationSystem.createAnimation Objects/Weapons/Handheld/knife_unlock/Animations/1p/1p_knife_unlock_attack05.baf
animationManager.looping 0
animationManager.length 0.8
animationSystem.createAnimation Objects/Weapons/Handheld/knife_unlock/Animations/1p/1p_knife_unlock_deploy.baf
animationManager.looping 0
animationManager.length 1.04167
animationSystem.createAnimation Objects/Weapons/Handheld/knife_unlock/Animations/1p/1p_knife_unlock_run.baf
animationManager.length 0.666667
animationSystem.createAnimation Objects/Weapons/Handheld/knife_unlock/Animations/1p/1p_knife_unlock_sprint.baf
animationManager.length 0.58
animationSystem.createAnimation Objects/Weapons/Handheld/knife_unlock/Animations/1p/1p_knife_unlock_stand.baf
animationManager.length 2.04167

rem *** Bundles ***
animationSystem.createBundle deploy
animationBundle.isLooping 0
animationBundle.fadeInTime 0
animationBundle.fadeOutTime 0.2
animationBundle.addAnimation Objects/Weapons/Handheld/knife_unlock/Animations/1p/1p_knife_unlock_deploy.baf

animationSystem.createBundle Fire03
animationBundle.isLooping 0
animationBundle.abruptPlayback 1
animationBundle.fadeInTime 0
animationBundle.addAnimation Objects/Weapons/Handheld/knife_unlock/Animations/1p/1p_knife_unlock_attack03.baf

animationSystem.createBundle Fire04
animationBundle.isLooping 0
animationBundle.abruptPlayback 1
animationBundle.fadeInTime 0
animationBundle.addAnimation Objects/Weapons/Handheld/knife_unlock/Animations/1p/1p_knife_unlock_attack04.baf

animationSystem.createBundle Fire05
animationBundle.isLooping 0
animationBundle.abruptPlayback 1
animationBundle.fadeInTime 0
animationBundle.addAnimation Objects/Weapons/Handheld/knife_unlock/Animations/1p/1p_knife_unlock_attack05.baf

animationSystem.createBundle idle1
animationBundle.isLooping 0
animationBundle.fadeInTime 0.001
animationBundle.fadeOutTime 0.5

animationSystem.createBundle Idle2
animationBundle.isLooping 0
animationBundle.fadeInTime 0.1
animationBundle.fadeOutTime 0.8

animationSystem.createBundle reload
animationBundle.isLooping 0
animationBundle.fadeOutTime 0.2

animationSystem.createBundle run
animationBundle.fadeOutTime 0.2
animationBundle.addAnimation Objects/Weapons/Handheld/knife_unlock/Animations/1p/1p_knife_unlock_run.baf

animationSystem.createBundle sprint
animationBundle.fadeOutTime 0.2
animationBundle.addAnimation Objects/Weapons/Handheld/knife_unlock/Animations/1p/1p_knife_unlock_sprint.baf

animationSystem.createBundle still
animationBundle.addAnimation Objects/Weapons/Handheld/knife_unlock/Animations/1p/1p_knife_unlock_stand.baf


rem *** Triggers ***
animationSystem.createTrigger RandomTrigger rnd_idle
animationTrigger.addBundle idle1
animationTrigger.addBundle Idle2

animationSystem.createTrigger IdleTrigger idle
animationTrigger.addChild rnd_idle
animationTrigger.idleTime 5/15

animationSystem.createTrigger Trigger still
animationTrigger.addChild idle
animationTrigger.addBundle still

animationSystem.createTrigger MovementTrigger move
animationTrigger.addBundle run
animationTrigger.valueHolder 1p_move

animationSystem.createTrigger MovementTrigger sprint
animationTrigger.addBundle sprint
animationTrigger.valueHolder 1p_sprint

animationSystem.createTrigger RandomTrigger rnd_Fire
animationTrigger.addBundle Fire03
animationTrigger.addBundle Fire04
animationTrigger.addBundle Fire05

animationSystem.createTrigger MessageTrigger fire
animationTrigger.addChild rnd_Fire
animationTrigger.message 1

animationSystem.createTrigger Trigger normal
animationTrigger.fadeInTime 0.2
animationTrigger.addChild still
animationTrigger.addChild move
animationTrigger.addChild sprint
animationTrigger.addChild fire

animationSystem.createTrigger Trigger root
animationTrigger.addChild normal

animationSystem.createTrigger Trigger startup
animationTrigger.addBundle deploy

animationSystem.createTrigger Trigger completeTree
animationTrigger.addChild root
animationTrigger.addChild startup

