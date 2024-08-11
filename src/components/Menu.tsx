import { NavLink } from "react-router-dom";

export default function Menu() {
  return (
    <nav>
      <ul>
        <li>
          <NavLink to={"/"}>Home</NavLink>
        </li>
        <li>
          <NavLink to={"/docs"}>Docs</NavLink>
        </li>
      </ul>
    </nav>
  );
}
