/**
  ******************************************************************************
  * @file    sinewave_data.c
  * @author  AST Embedded Analytics Research Platform
  * @date    Wed Oct  6 09:16:08 2021
  * @brief   AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  ******************************************************************************
  */
#include "sinewave_data.h"
#include "ai_platform_interface.h"


AI_ALIGNED(32)
const ai_u64 s_sinewave_weights_array_u64[ 53 ] = {
  0x4ca5810de1131d75U, 0xdf1b7562b2d4d5feU, 0xc2dfffffeaaU, 0xfffff941U,
  0xc51U, 0xffffff9800000000U, 0x0U, 0x21a7U,
  0xfffff85e000007d1U, 0xffffef66U, 0xebef1704ecfefbedU, 0xf5f8faff0102f8e6U,
  0xdce1defb1428e6e0U, 0xf9efe4060630def0U, 0x5e9ff00e00b1701U, 0x1c5eb191b81efe6U,
  0x1d13ec0ef7dd000eU, 0xe0b506fde6aa1304U, 0x2805f7eadeeceb0dU, 0xde3a1dea1a71e41aU,
  0xe11b030f19f1f31aU, 0x181bf6ff19f613deU, 0x19e5211c1bde1df1U, 0xdec802010b96fff5U,
  0xea0efcebe311f50dU, 0xe25f011dfc5eebfaU, 0x21300eeec13f0deU, 0xf409e90b141a0cecU,
  0xe815022805db0119U, 0xe9e4fb0d009602eaU, 0xf6ef020ffd150407U, 0x11f7de0b0d02ee06U,
  0xf40eff26f1f809f8U, 0x182ae7f51d2812ecU, 0xfb1d1d05f4f3fbe0U, 0x30907e811fc1efdU,
  0xf1f91cdbfb31f112U, 0xfd4aff1d0c70e7f3U, 0x1adffa191907f00eU, 0xc41eb121c38131fU,
  0xf2f1ebf613e6cba7U, 0xf40bcce7e519fa1cU, 0x47effffff96U, 0x5f500000aeeU,
  0xfffff807U, 0xfffff7cc00000b02U, 0xa1c00000458U, 0x558fffffe83U,
  0xfffff75300000000U, 0x567fffff8b7U, 0x31da1649d6a8c017U, 0x81273ee7c116d9b8U,
  0xfffff16cU,
};



AI_API_DECLARE_BEGIN

/*!
 * @brief Get network weights array pointer as a handle ptr.
 * @ingroup sinewave_data
 * @return a ai_handle pointer to the weights array
 */
AI_DEPRECATED
AI_API_ENTRY
ai_handle ai_sinewave_data_weights_get(void)
{
  static const ai_u8* const s_sinewave_weights_map[1 + 2] = {
    AI_PTR(AI_MAGIC_MARKER),
    AI_PTR(s_sinewave_weights_array_u64),
    AI_PTR(AI_MAGIC_MARKER)
  };

  return AI_HANDLE_PTR(s_sinewave_weights_map);

}


/*!
 * @brief Get network params configuration data structure.
 * @ingroup sinewave_data
 * @return true if a valid configuration is present, false otherwise
 */
AI_API_ENTRY
ai_bool ai_sinewave_data_params_get(ai_handle network, ai_network_params* params)
{
  if (!(network && params)) return false;
  
  static ai_buffer s_sinewave_data_map_activations[AI_SINEWAVE_DATA_ACTIVATIONS_COUNT] = {
    AI_BUFFER_OBJ_INIT(AI_BUFFER_FORMAT_U8, 1, 1, AI_SINEWAVE_DATA_ACTIVATIONS_SIZE, 1, NULL)
  };

  const ai_buffer_array map_activations = 
    AI_BUFFER_ARRAY_OBJ_INIT(AI_FLAG_NONE, AI_SINEWAVE_DATA_ACTIVATIONS_COUNT, s_sinewave_data_map_activations);
  
  static ai_buffer s_sinewave_data_map_weights[AI_SINEWAVE_DATA_WEIGHTS_COUNT] = {
    AI_BUFFER_OBJ_INIT(AI_BUFFER_FORMAT_U8, 1, 1, 424, 1, s_sinewave_weights_array_u64),
    
  };

  const ai_buffer_array map_weights = 
    AI_BUFFER_ARRAY_OBJ_INIT(AI_FLAG_NONE, AI_SINEWAVE_DATA_WEIGHTS_COUNT, s_sinewave_data_map_weights);

  return ai_platform_bind_network_params(network, params, &map_weights, &map_activations);
}


AI_API_DECLARE_END
