@react.component
let make =
    (
      ~label,
      ~id,
      ~children,
      ~containerClass="form-group",
      ~labelClass="",
    ) => {
  <div className=containerClass>
    <label htmlFor=id className=labelClass> {React.string(label)} </label>
    children
  </div>;
};