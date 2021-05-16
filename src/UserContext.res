// Define the type of the value we will put in context - pair of user and dispatch
type dispatch = Types.formAction => unit;
type contextValue = (Types.form, dispatch);

let initValue: contextValue = (
  {name: "", hobby: "", idFlag: false, id: 0},
  _ => ignore(),
);

// Create the context that will hold the valuer
let context = React.createContext(initValue);

// Create hooks for ease of access to the context value
let useForm = () => React.useContext(context);