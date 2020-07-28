
#pragma once

namespace Steinberg {
namespace BadCrusher {

enum HelloWorldParams : Vst::ParamID
{
	kBypassId = 100,

	kParamCrush = 102,
	kParamBend = 1000
};


// HERE you have to define new unique class ids: for processor and for controller
// you can use GUID creator tools like https://www.guidgenerator.com/
static const FUID MyProcessorUID (0xff50a97c, 0x49b31054, 0x4fe7f430, 0x54446c34);
static const FUID MyControllerUID (0x5881d6ba, 0x5c5b172e, 0x5f898df4, 0x62787dd6);

//------------------------------------------------------------------------
} // namespace HelloWorld
} // namespace Steinberg
