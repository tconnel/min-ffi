//NOTE these allows might not be required with further arguments to rustfmt, but ok for now.
#[allow(unused)]
#[allow(non_camel_case_types)]
#[allow(non_upper_case_globals)]
mod identity;

// //NOTE this block is unneeded when using bindgen, was created manually
// #[link(name="identity")]
// extern "C" {
//     fn identity_int32_t(x: i32) -> i32;
//     //fn identity_identity_test(x: identity_test) -> identity_test;
// }

fn main() -> () {
    //NOTE struct is 'safe', but cross-language call is not. Woot.
    let mystruct = identity::identity_test { i: 0 };
    unsafe {
        std::process::exit(identity::identity_int(mystruct.i));
    }
}
