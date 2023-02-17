#include "nuitrack/Nuitrack.h"

int main() {
	tdv::nuitrack::Nuitrack::init();

	// Create bag file there so it works
	tdv::nuitrack::Nuitrack::setConfigValue("Realsense2Module.FileRecord", "C:/Users/Public/Videos/sample.bag");	

	auto SkeletonTracker = tdv::nuitrack::SkeletonTracker::create(); // --> Error 
	// Unhandled exception at 0x00007FF936F39980 (RealSense.dll) in Nuitrack.exe: Stack cookie instrumentation code detected a stack-based buffer overrun.

	return 0;
}