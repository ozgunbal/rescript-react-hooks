open Types;

let eventValue = evt => ReactEvent.Form.target(evt)##value;

[@react.component]
let make = () => {
  let (_, dispatch) = UserContext.useForm();
  let (name, setName) = React.useState(_ => "");
  let (hobby, setHobby) = React.useState(_ => "");
  let (idFlag, setIdFlag) = React.useState(_ => false);
  let (id, setId) = React.useState(_ => 0);

  let submitForm = evt => {
    ReactEvent.Form.preventDefault(evt);
    dispatch(SubmitForm({name, hobby, idFlag, id}));
  };

  <div>
    <h2> {React.string("Form Example")} </h2>
    <form onSubmit=submitForm>
      <Field
        inputType="text"
        label="Full name"
        name="name"
        value=name
        onChange={evt => setName(evt->eventValue)}
      />
      <FieldWithChildren label="Hobbies" id="hobby">
        <select
          name="hobby"
          className="form-control"
          value=hobby
          onChange={evt => setHobby(evt->eventValue)}>
          <option value="cooking"> {React.string("cooking")} </option>
          <option value="running"> {React.string("running")} </option>
          <option value="coding"> {React.string("coding")} </option>
          <option value="driving"> {React.string("driving")} </option>
        </select>
      </FieldWithChildren>
      <Field
        inputType="checkbox"
        label="Custom ID"
        name="idFlag"
        containerClass="form-check custom-checkbox"
        inputClass="form-check-input"
        labelClass="form-check-label"
        value={string_of_bool(idFlag)}
        checked=idFlag
        onChange={evt => setIdFlag(ReactEvent.Form.target(evt)##checked)}
      />
      {idFlag
         ? <Field
             label="ID"
             inputType="number"
             name="id"
             value={string_of_int(id)}
             onChange={evt => setId(evt->eventValue)}
           />
         : React.null}
      <button type_="submit" className="btn btn-primary">
        {React.string("Submit")}
      </button>
    </form>
  </div>;
};