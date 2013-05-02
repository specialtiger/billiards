
(cl:in-package :asdf)

(defsystem "billiards_msgs-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :actionlib_msgs-msg
               :geometry_msgs-msg
               :std_msgs-msg
)
  :components ((:file "_package")
    (:file "PlanShotAction" :depends-on ("_package_PlanShotAction"))
    (:file "_package_PlanShotAction" :depends-on ("_package"))
    (:file "BallState" :depends-on ("_package_BallState"))
    (:file "_package_BallState" :depends-on ("_package"))
    (:file "StrikeFeedback" :depends-on ("_package_StrikeFeedback"))
    (:file "_package_StrikeFeedback" :depends-on ("_package"))
    (:file "PoseStampedToTFGoal" :depends-on ("_package_PoseStampedToTFGoal"))
    (:file "_package_PoseStampedToTFGoal" :depends-on ("_package"))
    (:file "PoseStampedToTFActionFeedback" :depends-on ("_package_PoseStampedToTFActionFeedback"))
    (:file "_package_PoseStampedToTFActionFeedback" :depends-on ("_package"))
    (:file "LocalizeTableActionResult" :depends-on ("_package_LocalizeTableActionResult"))
    (:file "_package_LocalizeTableActionResult" :depends-on ("_package"))
    (:file "PocketState" :depends-on ("_package_PocketState"))
    (:file "_package_PocketState" :depends-on ("_package"))
    (:file "GetTableStateActionFeedback" :depends-on ("_package_GetTableStateActionFeedback"))
    (:file "_package_GetTableStateActionFeedback" :depends-on ("_package"))
    (:file "PoseStampedToTFActionResult" :depends-on ("_package_PoseStampedToTFActionResult"))
    (:file "_package_PoseStampedToTFActionResult" :depends-on ("_package"))
    (:file "SwingArmsResult" :depends-on ("_package_SwingArmsResult"))
    (:file "_package_SwingArmsResult" :depends-on ("_package"))
    (:file "Constants" :depends-on ("_package_Constants"))
    (:file "_package_Constants" :depends-on ("_package"))
    (:file "SwingArmsActionFeedback" :depends-on ("_package_SwingArmsActionFeedback"))
    (:file "_package_SwingArmsActionFeedback" :depends-on ("_package"))
    (:file "StrikeActionResult" :depends-on ("_package_StrikeActionResult"))
    (:file "_package_StrikeActionResult" :depends-on ("_package"))
    (:file "SwingArmsAction" :depends-on ("_package_SwingArmsAction"))
    (:file "_package_SwingArmsAction" :depends-on ("_package"))
    (:file "PlaceBridgeAction" :depends-on ("_package_PlaceBridgeAction"))
    (:file "_package_PlaceBridgeAction" :depends-on ("_package"))
    (:file "GetTableStateResult" :depends-on ("_package_GetTableStateResult"))
    (:file "_package_GetTableStateResult" :depends-on ("_package"))
    (:file "PlayResult" :depends-on ("_package_PlayResult"))
    (:file "_package_PlayResult" :depends-on ("_package"))
    (:file "LocalizeTableAction" :depends-on ("_package_LocalizeTableAction"))
    (:file "_package_LocalizeTableAction" :depends-on ("_package"))
    (:file "GetTableStateFeedback" :depends-on ("_package_GetTableStateFeedback"))
    (:file "_package_GetTableStateFeedback" :depends-on ("_package"))
    (:file "PlanShotResult" :depends-on ("_package_PlanShotResult"))
    (:file "_package_PlanShotResult" :depends-on ("_package"))
    (:file "PoseStampedToTFFeedback" :depends-on ("_package_PoseStampedToTFFeedback"))
    (:file "_package_PoseStampedToTFFeedback" :depends-on ("_package"))
    (:file "LocalizeTableActionFeedback" :depends-on ("_package_LocalizeTableActionFeedback"))
    (:file "_package_LocalizeTableActionFeedback" :depends-on ("_package"))
    (:file "PoseStampedToTFAction" :depends-on ("_package_PoseStampedToTFAction"))
    (:file "_package_PoseStampedToTFAction" :depends-on ("_package"))
    (:file "ShotPlan" :depends-on ("_package_ShotPlan"))
    (:file "_package_ShotPlan" :depends-on ("_package"))
    (:file "LocalizeTableFeedback" :depends-on ("_package_LocalizeTableFeedback"))
    (:file "_package_LocalizeTableFeedback" :depends-on ("_package"))
    (:file "PlayActionFeedback" :depends-on ("_package_PlayActionFeedback"))
    (:file "_package_PlayActionFeedback" :depends-on ("_package"))
    (:file "StrikeResult" :depends-on ("_package_StrikeResult"))
    (:file "_package_StrikeResult" :depends-on ("_package"))
    (:file "StrikeAction" :depends-on ("_package_StrikeAction"))
    (:file "_package_StrikeAction" :depends-on ("_package"))
    (:file "PlayFeedback" :depends-on ("_package_PlayFeedback"))
    (:file "_package_PlayFeedback" :depends-on ("_package"))
    (:file "PlaceBridgeActionGoal" :depends-on ("_package_PlaceBridgeActionGoal"))
    (:file "_package_PlaceBridgeActionGoal" :depends-on ("_package"))
    (:file "PlayAction" :depends-on ("_package_PlayAction"))
    (:file "_package_PlayAction" :depends-on ("_package"))
    (:file "StrikeActionGoal" :depends-on ("_package_StrikeActionGoal"))
    (:file "_package_StrikeActionGoal" :depends-on ("_package"))
    (:file "SwingArmsFeedback" :depends-on ("_package_SwingArmsFeedback"))
    (:file "_package_SwingArmsFeedback" :depends-on ("_package"))
    (:file "GetTableStateGoal" :depends-on ("_package_GetTableStateGoal"))
    (:file "_package_GetTableStateGoal" :depends-on ("_package"))
    (:file "LocalizeTableResult" :depends-on ("_package_LocalizeTableResult"))
    (:file "_package_LocalizeTableResult" :depends-on ("_package"))
    (:file "PlanShotActionFeedback" :depends-on ("_package_PlanShotActionFeedback"))
    (:file "_package_PlanShotActionFeedback" :depends-on ("_package"))
    (:file "PlanShotActionResult" :depends-on ("_package_PlanShotActionResult"))
    (:file "_package_PlanShotActionResult" :depends-on ("_package"))
    (:file "PlanShotGoal" :depends-on ("_package_PlanShotGoal"))
    (:file "_package_PlanShotGoal" :depends-on ("_package"))
    (:file "StrikeGoal" :depends-on ("_package_StrikeGoal"))
    (:file "_package_StrikeGoal" :depends-on ("_package"))
    (:file "PlanShotActionGoal" :depends-on ("_package_PlanShotActionGoal"))
    (:file "_package_PlanShotActionGoal" :depends-on ("_package"))
    (:file "GetTableStateActionResult" :depends-on ("_package_GetTableStateActionResult"))
    (:file "_package_GetTableStateActionResult" :depends-on ("_package"))
    (:file "GetTableStateActionGoal" :depends-on ("_package_GetTableStateActionGoal"))
    (:file "_package_GetTableStateActionGoal" :depends-on ("_package"))
    (:file "PlaceBridgeActionFeedback" :depends-on ("_package_PlaceBridgeActionFeedback"))
    (:file "_package_PlaceBridgeActionFeedback" :depends-on ("_package"))
    (:file "SwingArmsGoal" :depends-on ("_package_SwingArmsGoal"))
    (:file "_package_SwingArmsGoal" :depends-on ("_package"))
    (:file "LocalizeTableActionGoal" :depends-on ("_package_LocalizeTableActionGoal"))
    (:file "_package_LocalizeTableActionGoal" :depends-on ("_package"))
    (:file "PlaceBridgeActionResult" :depends-on ("_package_PlaceBridgeActionResult"))
    (:file "_package_PlaceBridgeActionResult" :depends-on ("_package"))
    (:file "PlaceBridgeResult" :depends-on ("_package_PlaceBridgeResult"))
    (:file "_package_PlaceBridgeResult" :depends-on ("_package"))
    (:file "PoseStampedToTFActionGoal" :depends-on ("_package_PoseStampedToTFActionGoal"))
    (:file "_package_PoseStampedToTFActionGoal" :depends-on ("_package"))
    (:file "PlaceBridgeGoal" :depends-on ("_package_PlaceBridgeGoal"))
    (:file "_package_PlaceBridgeGoal" :depends-on ("_package"))
    (:file "PlayActionGoal" :depends-on ("_package_PlayActionGoal"))
    (:file "_package_PlayActionGoal" :depends-on ("_package"))
    (:file "StrikeActionFeedback" :depends-on ("_package_StrikeActionFeedback"))
    (:file "_package_StrikeActionFeedback" :depends-on ("_package"))
    (:file "PoseStampedToTFResult" :depends-on ("_package_PoseStampedToTFResult"))
    (:file "_package_PoseStampedToTFResult" :depends-on ("_package"))
    (:file "SwingArmsActionResult" :depends-on ("_package_SwingArmsActionResult"))
    (:file "_package_SwingArmsActionResult" :depends-on ("_package"))
    (:file "PlaceBridgeFeedback" :depends-on ("_package_PlaceBridgeFeedback"))
    (:file "_package_PlaceBridgeFeedback" :depends-on ("_package"))
    (:file "LocalizeTableGoal" :depends-on ("_package_LocalizeTableGoal"))
    (:file "_package_LocalizeTableGoal" :depends-on ("_package"))
    (:file "SwingArmsActionGoal" :depends-on ("_package_SwingArmsActionGoal"))
    (:file "_package_SwingArmsActionGoal" :depends-on ("_package"))
    (:file "TableState" :depends-on ("_package_TableState"))
    (:file "_package_TableState" :depends-on ("_package"))
    (:file "PlayGoal" :depends-on ("_package_PlayGoal"))
    (:file "_package_PlayGoal" :depends-on ("_package"))
    (:file "PlayActionResult" :depends-on ("_package_PlayActionResult"))
    (:file "_package_PlayActionResult" :depends-on ("_package"))
    (:file "GetTableStateAction" :depends-on ("_package_GetTableStateAction"))
    (:file "_package_GetTableStateAction" :depends-on ("_package"))
    (:file "PlanShotFeedback" :depends-on ("_package_PlanShotFeedback"))
    (:file "_package_PlanShotFeedback" :depends-on ("_package"))
  ))