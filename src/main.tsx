import { StrictMode } from "react";
import { createRoot } from "react-dom/client";
import {
  createBrowserRouter,
  createRoutesFromElements,
  Route,
  RouterProvider,
} from "react-router-dom";
import "./index.css";
import Home from "./pages/Home";
import Docs from "./layouts/Docs";
import Overview from "./pages/docs/Overview";
import UsersSignup from "./pages/docs/users/Signup";

const router = createBrowserRouter(
  createRoutesFromElements(
    <>
      <Route path="/" element={<Home />} />
      <Route path="/docs" element={<Docs />}>
        <Route path="overview" element={<Overview />} />
        <Route path="users">
          <Route path="signup" element={<UsersSignup />} />
        </Route>
      </Route>
    </>,
  ),
);

createRoot(document.getElementById("root")!).render(
  <StrictMode>
    <RouterProvider router={router} />
  </StrictMode>,
);
