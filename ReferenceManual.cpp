#include <iostream>
#include "ReferenceManual.h"
#include "ColorUtils.h"

namespace TelCoColorCoder
{
    void PrintReferenceManual() {
        std::cout << "----- Color Code Reference Manual -----\n";
        for(int i = 1; i <= numberOfMajorColors * numberOfMinorColors; i++) {
            ColorPair cp = GetColorFromPairNumber(i);
            std::cout << i << " : " << cp.ToString() << "\n";
        }
        std::cout << "--------------------------------------\n";
    }
}
