--- src/essentia/roguevector.h.orig	2014-11-22 20:50:27 UTC
+++ src/essentia/roguevector.h
@@ -98,7 +98,7 @@ void RogueVector<T>::setSize(size_t size
 
 
 // Mac implementation
-#elif defined (OS_MAC)
+#elif defined (OS_MAC) || defined(OS_FREEBSD)
 
 // TODO: this is a big hack that relies on clang/libcpp not changing the memory
 //       layout of the std::vector (very dangerous, but works for now...)
