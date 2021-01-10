#include <log.h>

int main() {
    log_init();

    log_trace("Trace blasdlabs ");
    log_debug("Trace blasdlabs ");
    log_info("Trace blasdlabs ");
    log_warn("Trace blasdlabs ");
    log_error("Trace blasdlabs ");
    log_fatal("Trace blasdlabs ");
    
    log_terminate();

  return 0;
}

