animationSystem.cameraSpring.use 1
animationSystem.cameraSpring.amplitude 0.02/0.02/0.02
animationSystem.cameraSpring.zoomDamping 5/5/5
animationSystem.cameraSpring.stiffness 10/10/10
animationSystem.cameraSpring.move 2/2/2
animationSystem.cameraSpring.look 1/1
animationSystem.cameraSpring.fire 0/0/20


rem *** Animations ***
animationSystem.createAnimation Objects/Weapons/Handheld/chrif_qbz95ugl/Animations/1p/1p_qbz95ugl_changeFirerate.baf
animationManager.looping 0
animationSystem.createAnimation Objects/Weapons/Handheld/chrif_qbz95ugl/Animations/1p/1p_qbz95ugl_deploy.baf
animationManager.looping 0
animationManager.length 1.2
animationSystem.createAnimation Objects/Weapons/Handheld/chrif_qbz95ugl/Animations/1p/1p_qbz95ugl_fire.baf
animationManager.looping 0
animationManager.noiceFreq 3
animationManager.noiceAmplitude 0.002
animationSystem.createAnimation Objects/Weapons/Handheld/chrif_qbz95ugl/Animations/1p/1p_qbz95ugl_reload.baf
animationManager.looping 0
animationManager.length 4.3
animationSystem.createAnimation Objects/Weapons/Handheld/chrif_qbz95ugl/Animations/1p/1p_qbz95ugl_run.baf
animationManager.length 0.666667
animationSystem.createAnimation Objects/Weapons/Handheld/chrif_qbz95ugl/Animations/1p/1p_qbz95ugl_sprint.baf
animationSystem.createAnimation Objects/Weapons/Handheld/chrif_qbz95ugl/Animations/1p/1p_qbz95ugl_stand.baf
animationSystem.createAnimation Objects/Weapons/Handheld/chrif_qbz95ugl/animations/1p/1p_qbz95ugl_to_zoom.baf
animationManager.looping 0
animationManager.length 0.3
animationSystem.createAnimation Objects/Weapons/Handheld/chrif_qbz95ugl/Animations/1p/1p_qbz95ugl_zoom_fire.baf
animationManager.looping 0
animationSystem.createAnimation Objects/Weapons/Handheld/chrif_qbz95ugl/Animations/1p/1p_qbz95ugl_zoom_run.baf
animationManager.length 1.83333
animationSystem.createAnimation Objects/Weapons/Handheld/chrif_qbz95ugl/Animations/1p/1p_qbz95ugl_zoom_changefirerate.baf
animationManager.looping 0
animationSystem.createAnimation Objects/Weapons/Handheld/chrif_qbz95ugl/Animations/1p/1p_qbz95ugl_zoom_stand.baf

rem *** Bundles ***
animationSystem.createBundle changeFirerate
animationBundle.isLooping 0
animationBundle.fadeInTime 0
animationBundle.addAnimation Objects/Weapons/Handheld/chrif_qbz95ugl/Animations/1p/1p_qbz95ugl_changeFirerate.baf

animationSystem.createBundle deploy
animationBundle.isLooping 0
animationBundle.fadeInTime 0
animationBundle.fadeOutTime 0.05
animationBundle.addAnimation Objects/Weapons/Handheld/chrif_qbz95ugl/Animations/1p/1p_qbz95ugl_deploy.baf

animationSystem.createBundle fire
animationBundle.isLooping 0
animationBundle.abruptPlayback 1
animationBundle.fadeInTime 0.001
animationBundle.fadeOutTime 0.05
animationBundle.addAnimation Objects/Weapons/Handheld/chrif_qbz95ugl/Animations/1p/1p_qbz95ugl_fire.baf

animationSystem.createBundle reload
animationBundle.isLooping 0
animationBundle.fadeOutTime 0.1
animationBundle.addAnimation Objects/Weapons/Handheld/chrif_qbz95ugl/Animations/1p/1p_qbz95ugl_reload.baf

animationSystem.createBundle run
animationBundle.fadeOutTime 0.2
animationBundle.addAnimation Objects/Weapons/Handheld/chrif_qbz95ugl/Animations/1p/1p_qbz95ugl_run.baf

animationSystem.createBundle sprint
animationBundle.fadeOutTime 0.2
animationBundle.addAnimation Objects/Weapons/Handheld/chrif_qbz95ugl/Animations/1p/1p_qbz95ugl_sprint.baf

animationSystem.createBundle still
animationBundle.addAnimation Objects/Weapons/Handheld/chrif_qbz95ugl/Animations/1p/1p_qbz95ugl_stand.baf

animationSystem.createBundle zoom_fire
animationBundle.isLooping 0
animationBundle.abruptPlayback 1
animationBundle.fadeInTime 0.001
animationBundle.fadeOutTime 0.05
animationBundle.addAnimation Objects/Weapons/Handheld/chrif_qbz95ugl/Animations/1p/1p_qbz95ugl_zoom_fire.baf

animationSystem.createBundle zoom_run
animationBundle.fadeOutTime 0.2
animationBundle.addAnimation Objects/Weapons/Handheld/chrif_qbz95ugl/Animations/1p/1p_qbz95ugl_zoom_run.baf

animationSystem.createBundle zoom_still
animationBundle.addAnimation Objects/Weapons/Handheld/chrif_qbz95ugl/Animations/1p/1p_qbz95ugl_zoom_stand.baf

animationSystem.createBundle ZoomTransition
animationBundle.isLooping 0
animationBundle.fadeInTime 0
animationBundle.fadeOutTime 0
animationBundle.addAnimation Objects/Weapons/Handheld/chrif_qbz95ugl/animations/1p/1p_qbz95ugl_to_zoom.baf

animationSystem.createBundle zoom_changeFirerate
animationBundle.isLooping 0
animationBundle.addAnimation Objects/Weapons/Handheld/chrif_qbz95ugl/animations/1p/1p_qbz95ugl_zoom_changefirerate.baf


rem *** Triggers ***
animationSystem.createTrigger Trigger zoom_still
animationTrigger.addBundle zoom_still

animationSystem.createTrigger MovementTrigger zoom_move
animationTrigger.addBundle zoom_run
animationTrigger.valueHolder 1p_zoom_move

animationSystem.createTrigger MessageTrigger zoom_fire
animationTrigger.addBundle zoom_fire
animationTrigger.message 1

animationSystem.createTrigger MessageTrigger zoom_changeFirerate
animationTrigger.addBundle zoom_changeFirerate
animationTrigger.message 8

animationSystem.createTrigger Trigger zoom
animationTrigger.addChild zoom_still
animationTrigger.addChild zoom_move
animationTrigger.addChild zoom_fire
animationTrigger.addChild zoom_changeFirerate

animationSystem.createTrigger RandomTrigger rnd_idle
animationTrigger.addBundle idle1
animationTrigger.addBundle idle2

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

animationSystem.createTrigger MessageTrigger fire
animationTrigger.addBundle fire
animationTrigger.message 1

animationSystem.createTrigger MessageTrigger changeFirerate
animationTrigger.addBundle changeFirerate
animationTrigger.message 8

animationSystem.createTrigger MessageTrigger reload
animationTrigger.addBundle reload
animationTrigger.message 2

animationSystem.createTrigger Trigger normal
animationTrigger.fadeInTime 0.2
animationTrigger.addChild still
animationTrigger.addChild move
animationTrigger.addChild sprint
animationTrigger.addChild fire
animationTrigger.addChild changeFirerate
animationTrigger.addChild reload

animationSystem.createTrigger SwitchMessageTrigger root
animationTrigger.addChild zoom
animationTrigger.addChild normal
animationTrigger.addBundle ZoomTransition
animationTrigger.message 4

animationSystem.createTrigger Trigger startup
animationTrigger.addBundle deploy

animationSystem.createTrigger Trigger completeTree
animationTrigger.addChild root
animationTrigger.addChild startup

