@react.component
let make = (~form: Types.form) => {
  <div>
    {React.string(
       "{ name: "
       ++ form.name
       ++ ", hobby: "
       ++ form.hobby
       ++ ", idFlag: "
       ++ string_of_bool(form.idFlag)
       ++ ", id: "
       ++ string_of_int(form.id)
       ++ " }",
     )}
  </div>;
};