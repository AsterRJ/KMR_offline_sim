
"use strict";

let SetSmartServoJointSpeedLimits = require('./SetSmartServoJointSpeedLimits.js')
let TimeToDestination = require('./TimeToDestination.js')
let SetPTPCartesianSpeedLimits = require('./SetPTPCartesianSpeedLimits.js')
let SetSpeedOverride = require('./SetSpeedOverride.js')
let ConfigureControlMode = require('./ConfigureControlMode.js')
let SetPTPJointSpeedLimits = require('./SetPTPJointSpeedLimits.js')
let SetWorkpiece = require('./SetWorkpiece.js')
let SetEndpointFrame = require('./SetEndpointFrame.js')
let SetSmartServoLinSpeedLimits = require('./SetSmartServoLinSpeedLimits.js')

module.exports = {
  SetSmartServoJointSpeedLimits: SetSmartServoJointSpeedLimits,
  TimeToDestination: TimeToDestination,
  SetPTPCartesianSpeedLimits: SetPTPCartesianSpeedLimits,
  SetSpeedOverride: SetSpeedOverride,
  ConfigureControlMode: ConfigureControlMode,
  SetPTPJointSpeedLimits: SetPTPJointSpeedLimits,
  SetWorkpiece: SetWorkpiece,
  SetEndpointFrame: SetEndpointFrame,
  SetSmartServoLinSpeedLimits: SetSmartServoLinSpeedLimits,
};
