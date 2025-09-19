#include "Test.h"
#include "ReferenceManual.h"

using namespace TelCoColorCoder;

int main() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

    // Print the reference manual
    PrintReferenceManual();

    return 0;
}
