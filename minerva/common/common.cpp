#include "./common.h"
#include <cstdarg>
#include <dmlc/logging.h>

namespace minerva {
namespace common {

void FatalError(char const* format, ...) {
  char *buffer;
  va_list va;
  va_start(va, format);
  vasprintf(&buffer, format, va);
  va_end(va);
  LOG(FATAL) << buffer;
  abort();
}

}  // namespace common
}  // namespace minerva

