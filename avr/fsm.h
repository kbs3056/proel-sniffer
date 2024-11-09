#ifndef _H_FSM
#define _H_FSM

#include <stdint.h>

enum State
{
	STATE_IDLE,
	STATE_RESET_START,
	STATE_RESET_END,
	STATE_FLAT_START,
	STATE_FLAT_END,
	STATE_RINGTONE_START,
	STATE_RINGTONE,
	STATE_END
};

typedef void (*fsm_cb)(uint8_t flatno);

void fsm_reset(void);
enum State fsm_get_state(void);
void fsm_set_cb(fsm_cb callback);
void fsm_push_event(uint8_t raising, uint32_t period);

#endif
