/*
 * r2h_ilink_event_def.h
 *
 *  Created on: 2020-3-31
 *      Author: CrazyHein
 */

#ifndef R2H_ILINK_EVENT_DEF_H_
#define R2H_ILINK_EVENT_DEF_H_

#include "../../r2h_ilink_data_type.h"

namespace R2H_ILINK
{

typedef enum EVENT_TRIGGER_ELEMENT_TYPE 
{
	EVENT_TRIGGER_LOGIC_OPERAND					= 0x01,
	EVENT_TRIGGER_LOGIC_TREE					= 0x02
}EVENT_TRIGGER_ELEMENT_TYPE_T;

typedef enum EVENT_TRIGGER_LOGIC_OPERATOR
{
	EVENT_TRIGGER_LOGIC_NONE					= 0x00,
	EVENT_TRIGGER_LOGIC_AND						= 0x01,
	EVENT_TRIGGER_LOGIC_OR						= 0x02,
	EVENT_TRIGGER_LOGIC_NOT						= 0x10,
	EVENT_TRIGGER_LOGIC_XOR						= 0x03,
	EVENT_TRIGGER_LOGIC_NAND					= 0x11,
	EVENT_TRIGGER_LOGIC_NOR						= 0x12,
}EVENT_TRIGGER_LOGIC_OPERATOR_T;

#define TIMER_EVENT_TYPE_NAME								("TIM")
#define CONSTENT_EVENT_TYPE_NAME							("CST")
#define INPUT_LEVEL_ALERT_EVENT_TYPE_NAME					("LVL")
#define INPUT_LIMIT_ALERT_EVENT_TYPE_NAME					("LMT")
#define FOLLOWING_ERROR_EVENT_TYPE_NAME						("ERR")

#define CONDITION_EQUAL_TO_TYPE_NAME						("EQU")
#define CONDITION_GREATER_THAN_TYPE_NAME					("GRT")
#define CONDITION_GREATER_OR_EQUAL_TYPE_NAME				("GTE")
#define CONDITION_LESS_THAN_TYPE_NAME						("LES")
#define CONDITION_LESS_OR_EQUAL_TYPE_NAME					("LTE")

#define MAX_LAYER_OF_EVENT_TRIGGER_LOGIC		(5)

}

#endif /* R2H_ILINK_EVENT_DEF_H_ */
