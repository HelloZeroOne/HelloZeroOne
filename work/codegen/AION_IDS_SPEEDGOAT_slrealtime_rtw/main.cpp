/* Main generated for Simulink Real-Time model AION_IDS_SPEEDGOAT */
#include <ModelInfo.hpp>
#include <utilities.hpp>
#include "AION_IDS_SPEEDGOAT.h"
#include "AION_IDS_SPEEDGOAT_calintf.h"

/* Task descriptors */
slrealtime::TaskInfo task_1( 0u, std::bind(AION_IDS_SPEEDGOAT_step, 0), slrealtime::TaskInfo::PERIODIC, 0.01, 0, 40);
slrealtime::TaskInfo task_2( 1u, std::bind(AION_IDS_SPEEDGOAT_step, 1), slrealtime::TaskInfo::PERIODIC, 0.02, 0, 39);
slrealtime::TaskInfo task_3( 2u, std::bind(AION_IDS_SPEEDGOAT_step, 2), slrealtime::TaskInfo::PERIODIC, 0.05, 0, 38);
slrealtime::TaskInfo task_4( 3u, std::bind(AION_IDS_SPEEDGOAT_step, 3), slrealtime::TaskInfo::PERIODIC, 0.2, 0, 37);

/* Executable base address for XCP */
#ifdef __linux__
extern char __executable_start;
static uintptr_t const base_address = reinterpret_cast<uintptr_t>(&__executable_start);
#else
/* Set 0 as placeholder, to be parsed later from /proc filesystem */
static uintptr_t const base_address = 0;
#endif

/* Model descriptor */
slrealtime::ModelInfo AION_IDS_SPEEDGOAT_Info =
{
    "AION_IDS_SPEEDGOAT",
    AION_IDS_SPEEDGOAT_initialize,
    AION_IDS_SPEEDGOAT_terminate,
    []()->char const*& { return AION_IDS_SPEEDGOAT_M->errorStatus; },
    []()->unsigned char& { return AION_IDS_SPEEDGOAT_M->Timing.stopRequestedFlag; },
    { task_1, task_2, task_3, task_4 },
    slrealtime::getSegmentVector()
};

int main(int argc, char *argv[]) {
    slrealtime::BaseAddress::set(base_address);
    return slrealtime::runModel(argc, argv, AION_IDS_SPEEDGOAT_Info);
}
