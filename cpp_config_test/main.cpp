#include <iomanip>
#include <iostream>

using namespace std;

#define CAPTURE(X)                                                            \
  cout << right << setw(5) << ' ' << left << setw(30) << #X << right << " = " \
       << setw(15) << (X) << '\n'
#define CAPTURE_UNDEF(X)                                             \
  cout << right << setw(5) << ' ' << left << setw(30) << #X << right \
       << setw(15 + 4) << " undefined\n"

inline void separate() {
  cout << setfill('-') << setw(80) << '\n' << setfill(' ');
}

int main() {
  separate();
  cout << "C++ Configuration Test:\n";
  separate();

  cout << "Operating System Macros:\n";
#ifdef __linux__
  CAPTURE(__linux__);
#else
  CAPTURE_UNDEF(__linux__);
#endif
#ifdef __ANDROID__
  CAPTURE(__ANDROID__);
#else
  CAPTURE_UNDEF(__ANDROID__);
#endif
#ifdef __APPLE__
  CAPTURE(__APPLE__);
#else
  CAPTURE_UNDEF(__APPLE__);
#endif
#ifdef _WIN32
  CAPTURE(_WIN32);
#else
  CAPTURE_UNDEF(_WIN32);
#endif
#ifdef _WIN64
  CAPTURE(_WIN64);
#else
  CAPTURE_UNDEF(_WIN64);
#endif
  cout << '\n';

  cout << "Compiler Macros:\n";
  cout << "  "
       << "GCC:\n";
#ifdef __GNUC__
  CAPTURE(__GNUC__);
#else
  CAPTURE_UNDEF(__GNUC__);
#endif
#ifdef __GNUC_MINOR__
  CAPTURE(__GNUC_MINOR__);
#else
  CAPTURE_UNDEF(__GNUC_MINOR__);
#endif
#ifdef __GNUC_PATCHLEVEL__
  CAPTURE(__GNUC_PATCHLEVEL__);
#else
  CAPTURE_UNDEF(__GNUC_PATCHLEVEL__);
#endif
  cout << "  "
       << "Clang:\n";
#ifdef __clang__
  CAPTURE(__clang__);
#else
  CAPTURE_UNDEF(__clang__);
#endif
#ifdef __clang_major__
  CAPTURE(__clang_major__);
#else
  CAPTURE_UNDEF(__clang_major__);
#endif
#ifdef __clang_minor__
  CAPTURE(__clang_minor__);
#else
  CAPTURE_UNDEF(__clang_minor__);
#endif
#ifdef __clang_patchlevel__
  CAPTURE(__clang_patchlevel__);
#else
  CAPTURE_UNDEF(__clang_patchlevel__);
#endif
#ifdef __clang_version__
  CAPTURE(__clang_version__);
#else
  CAPTURE_UNDEF(__clang_version__);
#endif
#ifdef __apple_build_version__
  CAPTURE(__apple_build_version__);
#else
  CAPTURE_UNDEF(__apple_build_version__);
#endif
  cout << "  "
       << "Microsoft:\n";
#ifdef _MSC_VER
  CAPTURE(_MSC_VER);
#else
  CAPTURE_UNDEF(_MSC_VER);
#endif
#ifdef _MSC_FULL_VER
  CAPTURE(_MSC_FULL_VER);
#else
  CAPTURE_UNDEF(_MSC_FULL_VER);
#endif
#ifdef _MSC_BUILD
  CAPTURE(_MSC_BUILD);
#else
  CAPTURE_UNDEF(_MSC_BUILD);
#endif
  cout << "  "
       << "MinGW:\n";
#ifdef __MINGW32__
  CAPTURE(__MINGW32__);
#else
  CAPTURE_UNDEF(__MINGW32__);
#endif
#ifdef __MINGW32_MAJOR_VERSION__
  CAPTURE(__MINGW32_MAJOR_VERSION__);
#else
  CAPTURE_UNDEF(__MINGW32_MAJOR_VERSION__);
#endif
#ifdef __MINGW32_MINOR_VERSION__
  CAPTURE(__MINGW32_MINOR_VERSION__);
#else
  CAPTURE_UNDEF(__MINGW32_MINOR_VERSION__);
#endif
#ifdef __MINGW64__
  CAPTURE(__MINGW64__);
#else
  CAPTURE_UNDEF(__MINGW64__);
#endif
#ifdef __MINGW64_VERSION_MAJOR__
  CAPTURE(__MINGW64_VERSION_MAJOR__);
#else
  CAPTURE_UNDEF(__MINGW64_VERSION_MAJOR__);
#endif
#ifdef __MINGW64_VERSION_MINOR__
  CAPTURE(__MINGW64_VERSION_MINOR__);
#else
  CAPTURE_UNDEF(__MINGW64_VERSION_MINOR__);
#endif
  cout << "  "
       << "Intel:\n";
#ifdef __INTEL_COMPILER
  CAPTURE(__INTEL_COMPILER);
#else
  CAPTURE_UNDEF(__INTEL_COMPILER);
#endif
#ifdef __INTEL_COMPILER_BUILD_DATE
  CAPTURE(__INTEL_COMPILER_BUILD_DATE);
#else
  CAPTURE_UNDEF(__INTEL_COMPILER_BUILD_DATE);
#endif
  separate();
}