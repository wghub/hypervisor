#ifndef VMM_VCPU_X64_INTEL_EXTERNAL_INTERRUPT_HPP
#define VMM_VCPU_X64_INTEL_EXTERNAL_INTERRUPT_HPP

#include <vmm/vcpu/x64/interrupt.hpp>

namespace vmm
{

class intel_interrupt :
    public interrupt
{
public:

    void interrupt_vmexit_enable() noexcept
    {
        return;
    }

    void interrupt_vmexit_disable() noexcept
    {
        return;
    }

    void interrupt_vmexit_handler_set(bsl::delegate<void (x64_vcpu &)> func)
    {
        return;
    }

    void interrupt_inject(uint64_t vector) noexcept
    {
        return;
    }

    intel_interrupt() noexcept = default;
};

}

#endif