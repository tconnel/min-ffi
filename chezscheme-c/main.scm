(load-shared-object "./lib/libidentity.so")

(let ((id (foreign-procedure "identity_int" (integer-32) integer-32)))
  (id 0))
