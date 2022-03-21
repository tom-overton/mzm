#ifndef CHOZO_BALL_AI_H
#define CHOZO_BALL_AI_H

#include "../types.h"

void chozo_ball_spawn_item_banner(u8 sprite_id);
void chozo_ball_set_oam_pointer(u8 sprite_id);
void chozo_ball_revealing_set_oam_pointer(u8 sprite_id);
void chozo_ball_revealed_set_oam_pointer(u8 sprite_id);
void chozo_ball_init(void);
void chozo_ball_empty(void);
void chozo_ball_revealing(void);
void chozo_ball_check_revealing_anim_ended(void);
void chozo_ball_register_item(void);
void chozo_ball_flash_animation(void);
void chozo_ball(void);

#endif /* CHOZO_BALL_AI_H */