export const SCALE_PROPERTIES = {
  width: new Set([
    "width",
    "maxWidth",
    "minWidth",
    "marginLeft",
    "marginRight",
    "marginHorizontal",
    "paddingLeft",
    "paddingRight",
    "paddingHorizontal",
    "left",
    "right",
  ]),
  height: new Set([
    "height",
    "maxHeight",
    "minHeight",
    "marginTop",
    "marginBottom",
    "marginVertical",
    "paddingTop",
    "paddingBottom",
    "paddingVertical",
    "top",
    "bottom",
  ]),
  aspect: new Set([
    "margin",
    "padding",
    "borderRadius",
    "borderWidth",
    "borderTopWidth",
    "borderRightWidth",
    "borderBottomWidth",
    "borderLeftWidth",
    "borderTopLeftRadius",
    "borderTopRightRadius",
    "borderBottomLeftRadius",
    "borderBottomRightRadius",
  ]),
} as const;

export const SCALE_BLACKLIST = new Set(["flex", "opacity", "zIndex", "aspectRatio", "elevation"]);
