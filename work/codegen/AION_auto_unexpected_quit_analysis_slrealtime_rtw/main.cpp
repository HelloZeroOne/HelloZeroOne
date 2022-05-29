/* Main generated for Simulink Real-Time model AION_auto_unexpected_quit_analysis */
#include <ModelInfo.hpp>
#include <utilities.hpp>
#include "AION_auto_unexpected_quit_analysis.h"
#include "AION_auto_unexpected_quit_analysis_calintf.h"

/* Task descriptors */
slrealtime::TaskInfo task_1( 0u, std::bind(AION_auto_unexpected_quit_analysis_step), slrealtime::TaskInfo::PERIODIC, 0.2, 0, 40);

/* Executable base address for XCP */
#ifdef __linux__
extern char __executable_start;
static uintptr_t const base_address = reinterpret_cast<uintptr_t>(&__executable_start);
#else
/* Set 0 as placeholder, to be parsed later from /proc filesystem */
static uintptr_t const base_address = 0;
#endif

/* Model descriptor */
slrealtime::ModelInfo AION_auto_unexpected_quit_analysis_Info =
{
    "AION_auto_unexpected_quit_analysis",
    AION_auto_unexpected_quit_analysis_initialize,
    AION_auto_unexpected_quit_analysis_terminate,
    []()->char const*& { return AION_auto_unexpected_quit_analysis_M->errorStatus; },
    []()->unsigned char& { return AION_auto_unexpected_quit_analysis_M->Timing.stopRequestedFlag; },
    { task_1 },
    slrealtime::getSegmentVector()
};

int main(int argc, char *argv[]) {
    slrealtime::BaseAddress::set(base_address);
    return slrealtime::runModel(argc, argv, AION_auto_unexpected_quit_analysis_Info);
}
