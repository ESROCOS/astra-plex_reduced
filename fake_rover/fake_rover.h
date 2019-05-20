/* This file was generated automatically: DO NOT MODIFY IT ! */

/* Declaration of the functions that have to be provided by the user */

#ifndef __USER_CODE_H_fake_rover__
#define __USER_CODE_H_fake_rover__

#include "C_ASN1_Types.h"

#ifdef __cplusplus
extern "C" {
#endif

void fake_rover_startup();

void fake_rover_PI_motion_command(const asn1SccBase_commands_Motion2D *);

extern void fake_rover_RI_updateRigidBodyState(const asn1SccBase_samples_RigidBodyState *);

#ifdef __cplusplus
}
#endif


#endif
