(compile-file "identity.lisp" :system-p t)
(ffi:defcallback foo nil nil (princ (format nil "hello world~&")))
(quit)
