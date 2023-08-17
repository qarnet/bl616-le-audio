#ifndef _ASCS_SVC_H_
#define _ASCS_SVC_H_


#define BT_UUID_SVC_BLE_ASCS BT_UUID_DECLARE_16(0x184e)
#define BT_UUID_CHRC_SINK_ASE BT_UUID_DECLARE_16(0x2bc4)
#define BT_UUID_CHRC_ASE_CONTROL_POINT BT_UUID_DECLARE_16(0x2bc6)

#include "port/include/config.h"

//indicate value handle offset 6
#define BT_CHAR_SINK_ASE_NOTIFY_ATTR_VAL_INDEX	(1)
//notity value handle offset 9
#define BT_CHAR_ASE_CONTROL_POINT_NOTIFY_ATTR_VAL_INDEX	(4)

void ascs_init();

#endif 

