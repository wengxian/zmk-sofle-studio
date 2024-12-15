#include <zmk/behavior.h>
#include <zmk/event_manager.h>
#include <zmk/rgb_underglow.h>

// 키 눌림 시 RGB 효과 실행
static int key_hit_rgb(struct zmk_behavior_binding *binding, struct zmk_behavior_binding_event *event)
{
    if (event->position_state)
    {
        // 키가 눌렸을 때 RGB 효과 켜기
        zmk_rgb_underglow_on();
        zmk_rgb_underglow_set_color_single(event->key_position, 255, 0, 0); // 빨간색
    }
    else
    {
        // 키가 떼어졌을 때 RGB 끄기
        zmk_rgb_underglow_off();
    }
    return 0;
}

static const struct behavior_driver_api key_hit_rgb_driver_api = {
    .binding_trigger = key_hit_rgb,
};

// ZMK에 커스텀 동작 등록
DEVICE_DT_DEFINE(DT_INST(0, custom_key_hit_rgb), NULL, NULL, NULL, NULL, APPLICATION, CONFIG_APPLICATION_INIT_PRIORITY,
                 &key_hit_rgb_driver_api);