// [%bs.raw {|require("../node_modules/bootstrap/dist/css/bootstrap.min.css")|}];

open Types;

type state = {form};
let initialState = {
  form: {
    name: "",
    hobby: "",
    idFlag: false,
    id: 0,
  },
};

let reducer = (_, action) =>
  switch (action) {
  | SubmitForm(userForm) => {form: userForm}
  };

[@react.component]
let make = () => {
  let (state, dispatch) = React.useReducer(reducer, initialState);

  <UserProvider value=(state.form, dispatch)>
    <div className="container">
      <Navbar />
      <ApplicationStats />
      <FormDisplay />
    </div>
  </UserProvider>;
};