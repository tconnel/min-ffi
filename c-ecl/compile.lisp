(compile-file "identity.lisp" :system-p t)
(c:build-shared-library "identity"
                        :lisp-files '("identity.o")
                        :init-name "init_identity")
(quit)
