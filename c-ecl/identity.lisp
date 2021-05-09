;(defun identity_id_int (x) x)
(ffi:def-struct identity_val
  (a :int))

;(defun id_int (x) x)

(ffi:defcallback id_int :int ((x :int))
  (lambda (x) x))

