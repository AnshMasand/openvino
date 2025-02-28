// Copyright (C) 2018-2023 Intel Corporation
// SPDX-License-Identifier: Apache-2.0
//

#pragma once

#include "openvino/pass/graph_rewrite.hpp"
#include "transformations_visibility.hpp"

namespace ov {
namespace pass {

class TRANSFORMATIONS_API ConvertMVN1ToMVN6;

}  // namespace pass
}  // namespace ov

/**
 * @ingroup ie_transformation_common_api
 * @brief ConvertMVN1ToMVN6 covert v0:MVN into v6::MVN.
 */
class ov::pass::ConvertMVN1ToMVN6 : public ov::pass::MatcherPass {
public:
    OPENVINO_RTTI("ConvertMVN1ToMVN6", "0");
    ConvertMVN1ToMVN6();
};
