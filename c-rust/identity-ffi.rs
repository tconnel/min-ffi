mod identity;

#[no_mangle]
pub extern "C" fn identity_int32_t(x: i32) -> i32 {
    identity::identity(x)
}
