
/**
 * This code was generated by [react-native-codegen](https://www.npmjs.com/package/react-native-codegen).
 *
 * Do not edit this file as changes may cause incorrect behavior and will be lost
 * once the code is regenerated.
 *
 * @generated by codegen project: GeneratePropsH.js
 */
#pragma once

#include <react/renderer/components/view/ViewProps.h>
#include <react/renderer/core/PropsParserContext.h>
#include <react/renderer/graphics/Color.h>
#include <react/renderer/imagemanager/primitives.h>
#include <vector>

namespace facebook::react {

class RNCSliderProps final : public ViewProps {
 public:
  RNCSliderProps() = default;
  RNCSliderProps(const PropsParserContext& context, const RNCSliderProps &sourceProps, const RawProps &rawProps);

#pragma mark - Props

  std::string accessibilityUnits{};
  std::vector<std::string> accessibilityIncrements{};
  bool disabled{false};
  bool inverted{false};
  bool vertical{false};
  bool tapToSeek{false};
  ImageSource maximumTrackImage{};
  SharedColor maximumTrackTintColor{};
  double maximumValue{0.0};
  ImageSource minimumTrackImage{};
  SharedColor minimumTrackTintColor{};
  double minimumValue{0.0};
  double step{0.0};
  std::string testID{};
  ImageSource thumbImage{};
  SharedColor thumbTintColor{};
  ImageSource trackImage{};
  Float value{0.0};
  Float lowerLimit{0.0};
  Float upperLimit{0.0};
};

} // namespace facebook::react
