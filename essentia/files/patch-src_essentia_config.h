--- src/essentia/config.h.orig	2014-11-22 20:49:45 UTC
+++ src/essentia/config.h
@@ -116,6 +116,8 @@
 #else
 #  if defined(macintosh) || defined(__APPLE__) || defined(__APPLE_CC__)
 #    define OS_MAC
+#  elif defined(__FreeBSD__)
+#    define OS_FREEBSD
 #  else
 #    define OS_LINUX
 #  endif
