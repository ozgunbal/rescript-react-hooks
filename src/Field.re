[@react.component]
let make =
    (
      ~label,
      ~name,
      ~containerClass="form-group",
      ~inputClass="form-control",
      ~labelClass="",
      ~inputType,
      ~value,
      ~checked: option(bool)=?,
      ~onChange,
    ) => {
  <div className=containerClass>
    <label htmlFor=name className=labelClass> {React.string(label)} </label>
    <input
      type_=inputType
      className=inputClass
      id=name
      name
      value
      onChange
      ?checked
    />
  </div>;
};