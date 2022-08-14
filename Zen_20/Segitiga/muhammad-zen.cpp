<!doctype html>
      <html lang=""  >
      <head>
          <meta http-equiv="X-UA-Compatible" content="IE=edge" />
          <meta charset="utf-8" />
          <meta name="mobile-web-app-capable" content="yes">
          <meta name="apple-mobile-web-app-capable" content="yes">
          <meta name="theme-color" content="#536878">
          <title data-react-helmet="true"></title>
          
          
          <meta name="viewport" content="width=device-width, initial-scale=1">
          <link rel="stylesheet" href="https://fonts.googleapis.com/icon?family=Material+Icons" />
          <link rel="stylesheet" href="https://use.fontawesome.com/releases/v5.1.0/css/all.css" integrity="sha384-lKuwvrZot6UHsBSfcMvOkWwlCMgc0TaWr+30HWe3a4ltaBwTZhyTEggF5tJv8tbt" crossorigin="anonymous" async/>
          <link rel="manifest" href="/manifest.json" />
          <link rel="icon" href="/images/logoIcon.png" />
          <script src="https://accounts.google.com/gsi/client" async defer></script>
          <link rel="preconnect" href=”https://init.dcoder.tech">
          <link rel="preconnect" href=”https://xcapi.dcoder.tech">
          <link rel="dns-prefetch" href=”http://cdn.carbonads.com">
          <link rel="dns-prefetch" href=”https://srv.carbonads.net>
          <link rel="dns-prefetch" href=”https://www.google-analytics.com>
          <script src="https://cdn.jsdelivr.net/npm/jwt-decode@3.0.0-beta.2/build/jwt-decode.cjs.min.js"></script>
          <link rel="stylesheet" href="/static/css/bundle.e8544af0.css">
          <style id='jss-ssr'>.MuiSvgIcon-root {
  fill: currentColor;
  width: 1em;
  height: 1em;
  display: inline-block;
  font-size: 1.5rem;
  transition: fill 200ms cubic-bezier(0.4, 0, 0.2, 1) 0ms;
  flex-shrink: 0;
  user-select: none;
}
.MuiSvgIcon-colorPrimary {
  color: #3f51b5;
}
.MuiSvgIcon-colorSecondary {
  color: #00BFA5;
}
.MuiSvgIcon-colorAction {
  color: #fff;
}
.MuiSvgIcon-colorError {
  color: #f44336;
}
.MuiSvgIcon-colorDisabled {
  color: rgba(255, 255, 255, 0.3);
}
.MuiSvgIcon-fontSizeInherit {
  font-size: inherit;
}
.MuiSvgIcon-fontSizeSmall {
  font-size: 1.25rem;
}
.MuiSvgIcon-fontSizeLarge {
  font-size: 2.1875rem;
}
.MuiPaper-root {
  color: #fff;
  transition: box-shadow 300ms cubic-bezier(0.4, 0, 0.2, 1) 0ms;
  background-color: #424242;
}
.MuiPaper-rounded {
  border-radius: 4px;
}
.MuiPaper-outlined {
  border: 1px solid rgba(255, 255, 255, 0.12);
}
.MuiPaper-elevation0 {
  box-shadow: none;
}
.MuiPaper-elevation1 {
  box-shadow: 0px 2px 1px -1px rgba(0,0,0,0.2),0px 1px 1px 0px rgba(0,0,0,0.14),0px 1px 3px 0px rgba(0,0,0,0.12);
}
.MuiPaper-elevation2 {
  box-shadow: 0px 3px 1px -2px rgba(0,0,0,0.2),0px 2px 2px 0px rgba(0,0,0,0.14),0px 1px 5px 0px rgba(0,0,0,0.12);
}
.MuiPaper-elevation3 {
  box-shadow: 0px 3px 3px -2px rgba(0,0,0,0.2),0px 3px 4px 0px rgba(0,0,0,0.14),0px 1px 8px 0px rgba(0,0,0,0.12);
}
.MuiPaper-elevation4 {
  box-shadow: 0px 2px 4px -1px rgba(0,0,0,0.2),0px 4px 5px 0px rgba(0,0,0,0.14),0px 1px 10px 0px rgba(0,0,0,0.12);
}
.MuiPaper-elevation5 {
  box-shadow: 0px 3px 5px -1px rgba(0,0,0,0.2),0px 5px 8px 0px rgba(0,0,0,0.14),0px 1px 14px 0px rgba(0,0,0,0.12);
}
.MuiPaper-elevation6 {
  box-shadow: 0px 3px 5px -1px rgba(0,0,0,0.2),0px 6px 10px 0px rgba(0,0,0,0.14),0px 1px 18px 0px rgba(0,0,0,0.12);
}
.MuiPaper-elevation7 {
  box-shadow: 0px 4px 5px -2px rgba(0,0,0,0.2),0px 7px 10px 1px rgba(0,0,0,0.14),0px 2px 16px 1px rgba(0,0,0,0.12);
}
.MuiPaper-elevation8 {
  box-shadow: 0px 5px 5px -3px rgba(0,0,0,0.2),0px 8px 10px 1px rgba(0,0,0,0.14),0px 3px 14px 2px rgba(0,0,0,0.12);
}
.MuiPaper-elevation9 {
  box-shadow: 0px 5px 6px -3px rgba(0,0,0,0.2),0px 9px 12px 1px rgba(0,0,0,0.14),0px 3px 16px 2px rgba(0,0,0,0.12);
}
.MuiPaper-elevation10 {
  box-shadow: 0px 6px 6px -3px rgba(0,0,0,0.2),0px 10px 14px 1px rgba(0,0,0,0.14),0px 4px 18px 3px rgba(0,0,0,0.12);
}
.MuiPaper-elevation11 {
  box-shadow: 0px 6px 7px -4px rgba(0,0,0,0.2),0px 11px 15px 1px rgba(0,0,0,0.14),0px 4px 20px 3px rgba(0,0,0,0.12);
}
.MuiPaper-elevation12 {
  box-shadow: 0px 7px 8px -4px rgba(0,0,0,0.2),0px 12px 17px 2px rgba(0,0,0,0.14),0px 5px 22px 4px rgba(0,0,0,0.12);
}
.MuiPaper-elevation13 {
  box-shadow: 0px 7px 8px -4px rgba(0,0,0,0.2),0px 13px 19px 2px rgba(0,0,0,0.14),0px 5px 24px 4px rgba(0,0,0,0.12);
}
.MuiPaper-elevation14 {
  box-shadow: 0px 7px 9px -4px rgba(0,0,0,0.2),0px 14px 21px 2px rgba(0,0,0,0.14),0px 5px 26px 4px rgba(0,0,0,0.12);
}
.MuiPaper-elevation15 {
  box-shadow: 0px 8px 9px -5px rgba(0,0,0,0.2),0px 15px 22px 2px rgba(0,0,0,0.14),0px 6px 28px 5px rgba(0,0,0,0.12);
}
.MuiPaper-elevation16 {
  box-shadow: 0px 8px 10px -5px rgba(0,0,0,0.2),0px 16px 24px 2px rgba(0,0,0,0.14),0px 6px 30px 5px rgba(0,0,0,0.12);
}
.MuiPaper-elevation17 {
  box-shadow: 0px 8px 11px -5px rgba(0,0,0,0.2),0px 17px 26px 2px rgba(0,0,0,0.14),0px 6px 32px 5px rgba(0,0,0,0.12);
}
.MuiPaper-elevation18 {
  box-shadow: 0px 9px 11px -5px rgba(0,0,0,0.2),0px 18px 28px 2px rgba(0,0,0,0.14),0px 7px 34px 6px rgba(0,0,0,0.12);
}
.MuiPaper-elevation19 {
  box-shadow: 0px 9px 12px -6px rgba(0,0,0,0.2),0px 19px 29px 2px rgba(0,0,0,0.14),0px 7px 36px 6px rgba(0,0,0,0.12);
}
.MuiPaper-elevation20 {
  box-shadow: 0px 10px 13px -6px rgba(0,0,0,0.2),0px 20px 31px 3px rgba(0,0,0,0.14),0px 8px 38px 7px rgba(0,0,0,0.12);
}
.MuiPaper-elevation21 {
  box-shadow: 0px 10px 13px -6px rgba(0,0,0,0.2),0px 21px 33px 3px rgba(0,0,0,0.14),0px 8px 40px 7px rgba(0,0,0,0.12);
}
.MuiPaper-elevation22 {
  box-shadow: 0px 10px 14px -6px rgba(0,0,0,0.2),0px 22px 35px 3px rgba(0,0,0,0.14),0px 8px 42px 7px rgba(0,0,0,0.12);
}
.MuiPaper-elevation23 {
  box-shadow: 0px 11px 14px -7px rgba(0,0,0,0.2),0px 23px 36px 3px rgba(0,0,0,0.14),0px 9px 44px 8px rgba(0,0,0,0.12);
}
.MuiPaper-elevation24 {
  box-shadow: 0px 11px 15px -7px rgba(0,0,0,0.2),0px 24px 38px 3px rgba(0,0,0,0.14),0px 9px 46px 8px rgba(0,0,0,0.12);
}
.MuiButtonBase-root {
  color: inherit;
  border: 0;
  cursor: pointer;
  margin: 0;
  display: inline-flex;
  outline: 0;
  padding: 0;
  position: relative;
  align-items: center;
  user-select: none;
  border-radius: 0;
  vertical-align: middle;
  -moz-appearance: none;
  justify-content: center;
  text-decoration: none;
  background-color: transparent;
  -webkit-appearance: none;
  -webkit-tap-highlight-color: transparent;
}
.MuiButtonBase-root::-moz-focus-inner {
  border-style: none;
}
.MuiButtonBase-root.Mui-disabled {
  cursor: default;
  pointer-events: none;
}
.MuiButton-root {
  color: #fff;
  padding: 6px 16px;
  font-size: 0.875rem;
  min-width: 64px;
  box-sizing: border-box;
  transition: background-color 250ms cubic-bezier(0.4, 0, 0.2, 1) 0ms,box-shadow 250ms cubic-bezier(0.4, 0, 0.2, 1) 0ms,border 250ms cubic-bezier(0.4, 0, 0.2, 1) 0ms;
  font-family: "Roboto", "Helvetica", "Arial", sans-serif;
  font-weight: 500;
  line-height: 1.75;
  border-radius: 4px;
  letter-spacing: 0.02857em;
  text-transform: uppercase;
}
.MuiButton-root:hover {
  text-decoration: none;
  background-color: rgba(255, 255, 255, 0.08);
}
.MuiButton-root.Mui-disabled {
  color: rgba(255, 255, 255, 0.3);
}
@media (hover: none) {
  .MuiButton-root:hover {
    background-color: transparent;
  }
}
  .MuiButton-root:hover.Mui-disabled {
    background-color: transparent;
  }
  .MuiButton-label {
    width: 100%;
    display: inherit;
    align-items: inherit;
    justify-content: inherit;
  }
  .MuiButton-text {
    padding: 6px 8px;
  }
  .MuiButton-textPrimary {
    color: #3f51b5;
  }
  .MuiButton-textPrimary:hover {
    background-color: rgba(63, 81, 181, 0.08);
  }
@media (hover: none) {
  .MuiButton-textPrimary:hover {
    background-color: transparent;
  }
}
  .MuiButton-textSecondary {
    color: #00BFA5;
  }
  .MuiButton-textSecondary:hover {
    background-color: rgba(0, 191, 165, 0.08);
  }
@media (hover: none) {
  .MuiButton-textSecondary:hover {
    background-color: transparent;
  }
}
  .MuiButton-outlined {
    border: 1px solid rgba(255, 255, 255, 0.23);
    padding: 5px 15px;
  }
  .MuiButton-outlined.Mui-disabled {
    border: 1px solid rgba(255, 255, 255, 0.12);
  }
  .MuiButton-outlinedPrimary {
    color: #3f51b5;
    border: 1px solid rgba(63, 81, 181, 0.5);
  }
  .MuiButton-outlinedPrimary:hover {
    border: 1px solid #3f51b5;
    background-color: rgba(63, 81, 181, 0.08);
  }
@media (hover: none) {
  .MuiButton-outlinedPrimary:hover {
    background-color: transparent;
  }
}
  .MuiButton-outlinedSecondary {
    color: #00BFA5;
    border: 1px solid rgba(0, 191, 165, 0.5);
  }
  .MuiButton-outlinedSecondary:hover {
    border: 1px solid #00BFA5;
    background-color: rgba(0, 191, 165, 0.08);
  }
  .MuiButton-outlinedSecondary.Mui-disabled {
    border: 1px solid rgba(255, 255, 255, 0.3);
  }
@media (hover: none) {
  .MuiButton-outlinedSecondary:hover {
    background-color: transparent;
  }
}
  .MuiButton-contained {
    color: rgba(0, 0, 0, 0.87);
    box-shadow: 0px 3px 1px -2px rgba(0,0,0,0.2),0px 2px 2px 0px rgba(0,0,0,0.14),0px 1px 5px 0px rgba(0,0,0,0.12);
    background-color: #e0e0e0;
  }
  .MuiButton-contained:hover {
    box-shadow: 0px 2px 4px -1px rgba(0,0,0,0.2),0px 4px 5px 0px rgba(0,0,0,0.14),0px 1px 10px 0px rgba(0,0,0,0.12);
    background-color: #d5d5d5;
  }
  .MuiButton-contained.Mui-focusVisible {
    box-shadow: 0px 3px 5px -1px rgba(0,0,0,0.2),0px 6px 10px 0px rgba(0,0,0,0.14),0px 1px 18px 0px rgba(0,0,0,0.12);
  }
  .MuiButton-contained:active {
    box-shadow: 0px 5px 5px -3px rgba(0,0,0,0.2),0px 8px 10px 1px rgba(0,0,0,0.14),0px 3px 14px 2px rgba(0,0,0,0.12);
  }
  .MuiButton-contained.Mui-disabled {
    color: rgba(255, 255, 255, 0.3);
    box-shadow: none;
    background-color: rgba(255, 255, 255, 0.12);
  }
@media (hover: none) {
  .MuiButton-contained:hover {
    box-shadow: 0px 3px 1px -2px rgba(0,0,0,0.2),0px 2px 2px 0px rgba(0,0,0,0.14),0px 1px 5px 0px rgba(0,0,0,0.12);
    background-color: #e0e0e0;
  }
}
  .MuiButton-contained:hover.Mui-disabled {
    background-color: rgba(255, 255, 255, 0.12);
  }
  .MuiButton-containedPrimary {
    color: #fff;
    background-color: #3f51b5;
  }
  .MuiButton-containedPrimary:hover {
    background-color: #303f9f;
  }
@media (hover: none) {
  .MuiButton-containedPrimary:hover {
    background-color: #3f51b5;
  }
}
  .MuiButton-containedSecondary {
    color: #ffcc00;
    background-color: #00BFA5;
  }
  .MuiButton-containedSecondary:hover {
    background-color: rgb(0, 133, 115);
  }
@media (hover: none) {
  .MuiButton-containedSecondary:hover {
    background-color: #00BFA5;
  }
}
  .MuiButton-disableElevation {
    box-shadow: none;
  }
  .MuiButton-disableElevation:hover {
    box-shadow: none;
  }
  .MuiButton-disableElevation.Mui-focusVisible {
    box-shadow: none;
  }
  .MuiButton-disableElevation:active {
    box-shadow: none;
  }
  .MuiButton-disableElevation.Mui-disabled {
    box-shadow: none;
  }
  .MuiButton-colorInherit {
    color: inherit;
    border-color: currentColor;
  }
  .MuiButton-textSizeSmall {
    padding: 4px 5px;
    font-size: 0.8125rem;
  }
  .MuiButton-textSizeLarge {
    padding: 8px 11px;
    font-size: 0.9375rem;
  }
  .MuiButton-outlinedSizeSmall {
    padding: 3px 9px;
    font-size: 0.8125rem;
  }
  .MuiButton-outlinedSizeLarge {
    padding: 7px 21px;
    font-size: 0.9375rem;
  }
  .MuiButton-containedSizeSmall {
    padding: 4px 10px;
    font-size: 0.8125rem;
  }
  .MuiButton-containedSizeLarge {
    padding: 8px 22px;
    font-size: 0.9375rem;
  }
  .MuiButton-fullWidth {
    width: 100%;
  }
  .MuiButton-startIcon {
    display: inherit;
    margin-left: -4px;
    margin-right: 8px;
  }
  .MuiButton-startIcon.MuiButton-iconSizeSmall {
    margin-left: -2px;
  }
  .MuiButton-endIcon {
    display: inherit;
    margin-left: 8px;
    margin-right: -4px;
  }
  .MuiButton-endIcon.MuiButton-iconSizeSmall {
    margin-right: -2px;
  }
  .MuiButton-iconSizeSmall > *:first-child {
    font-size: 18px;
  }
  .MuiButton-iconSizeMedium > *:first-child {
    font-size: 20px;
  }
  .MuiButton-iconSizeLarge > *:first-child {
    font-size: 22px;
  }
  .MuiIconButton-root {
    flex: 0 0 auto;
    color: #fff;
    padding: 12px;
    overflow: visible;
    font-size: 1.5rem;
    text-align: center;
    transition: background-color 150ms cubic-bezier(0.4, 0, 0.2, 1) 0ms;
    border-radius: 50%;
  }
  .MuiIconButton-root:hover {
    background-color: rgba(255, 255, 255, 0.08);
  }
  .MuiIconButton-root.Mui-disabled {
    color: rgba(255, 255, 255, 0.3);
    background-color: transparent;
  }
@media (hover: none) {
  .MuiIconButton-root:hover {
    background-color: transparent;
  }
}
  .MuiIconButton-edgeStart {
    margin-left: -12px;
  }
  .MuiIconButton-sizeSmall.MuiIconButton-edgeStart {
    margin-left: -3px;
  }
  .MuiIconButton-edgeEnd {
    margin-right: -12px;
  }
  .MuiIconButton-sizeSmall.MuiIconButton-edgeEnd {
    margin-right: -3px;
  }
  .MuiIconButton-colorInherit {
    color: inherit;
  }
  .MuiIconButton-colorPrimary {
    color: #3f51b5;
  }
  .MuiIconButton-colorPrimary:hover {
    background-color: rgba(63, 81, 181, 0.08);
  }
@media (hover: none) {
  .MuiIconButton-colorPrimary:hover {
    background-color: transparent;
  }
}
  .MuiIconButton-colorSecondary {
    color: #00BFA5;
  }
  .MuiIconButton-colorSecondary:hover {
    background-color: rgba(0, 191, 165, 0.08);
  }
@media (hover: none) {
  .MuiIconButton-colorSecondary:hover {
    background-color: transparent;
  }
}
  .MuiIconButton-sizeSmall {
    padding: 3px;
    font-size: 1.125rem;
  }
  .MuiIconButton-label {
    width: 100%;
    display: flex;
    align-items: inherit;
    justify-content: inherit;
  }
html {
  box-sizing: border-box;
  -webkit-font-smoothing: antialiased;
  -moz-osx-font-smoothing: grayscale;
}
*, *::before, *::after {
  box-sizing: inherit;
}
strong, b {
  font-weight: 700;
}
body {
  color: #fff;
  margin: 0;
  font-size: 0.875rem;
  font-family: "Roboto", "Helvetica", "Arial", sans-serif;
  font-weight: 400;
  line-height: 1.43;
  letter-spacing: 0.01071em;
  background-color: rgb(17, 17, 17);
}
@media print {
  body {
    background-color: #fff;
  }
}
body::backdrop {
  background-color: rgb(17, 17, 17);
}
@media print {
  .MuiDialog-root {
    position: absolute !important;
  }
}
  .MuiDialog-scrollPaper {
    display: flex;
    align-items: center;
    justify-content: center;
  }
  .MuiDialog-scrollBody {
    overflow-x: hidden;
    overflow-y: auto;
    text-align: center;
  }
  .MuiDialog-scrollBody:after {
    width: 0;
    height: 100%;
    content: "";
    display: inline-block;
    vertical-align: middle;
  }
  .MuiDialog-container {
    height: 100%;
    outline: 0;
  }
@media print {
  .MuiDialog-container {
    height: auto;
  }
}
  .MuiDialog-paper {
    margin: 32px;
    position: relative;
    overflow-y: auto;
  }
@media print {
  .MuiDialog-paper {
    box-shadow: none;
    overflow-y: visible;
  }
}
  .MuiDialog-paperScrollPaper {
    display: flex;
    max-height: calc(100% - 64px);
    flex-direction: column;
  }
  .MuiDialog-paperScrollBody {
    display: inline-block;
    text-align: left;
    vertical-align: middle;
  }
  .MuiDialog-paperWidthFalse {
    max-width: calc(100% - 64px);
  }
  .MuiDialog-paperWidthXs {
    max-width: 444px;
  }
@media (max-width:507.95px) {
  .MuiDialog-paperWidthXs.MuiDialog-paperScrollBody {
    max-width: calc(100% - 64px);
  }
}
  .MuiDialog-paperWidthSm {
    max-width: 600px;
  }
@media (max-width:663.95px) {
  .MuiDialog-paperWidthSm.MuiDialog-paperScrollBody {
    max-width: calc(100% - 64px);
  }
}
  .MuiDialog-paperWidthMd {
    max-width: 960px;
  }
@media (max-width:1023.95px) {
  .MuiDialog-paperWidthMd.MuiDialog-paperScrollBody {
    max-width: calc(100% - 64px);
  }
}
  .MuiDialog-paperWidthLg {
    max-width: 1280px;
  }
@media (max-width:1343.95px) {
  .MuiDialog-paperWidthLg.MuiDialog-paperScrollBody {
    max-width: calc(100% - 64px);
  }
}
  .MuiDialog-paperWidthXl {
    max-width: 1920px;
  }
@media (max-width:1983.95px) {
  .MuiDialog-paperWidthXl.MuiDialog-paperScrollBody {
    max-width: calc(100% - 64px);
  }
}
  .MuiDialog-paperFullWidth {
    width: calc(100% - 64px);
  }
  .MuiDialog-paperFullScreen {
    width: 100%;
    height: 100%;
    margin: 0;
    max-width: 100%;
    max-height: none;
    border-radius: 0;
  }
  .MuiDialog-paperFullScreen.MuiDialog-paperScrollBody {
    margin: 0;
    max-width: 100%;
  }
  .MuiDrawer-docked {
    flex: 0 0 auto;
  }
  .MuiDrawer-paper {
    top: 0;
    flex: 1 0 auto;
    height: 100%;
    display: flex;
    outline: 0;
    z-index: 1200;
    position: fixed;
    overflow-y: auto;
    flex-direction: column;
    -webkit-overflow-scrolling: touch;
  }
  .MuiDrawer-paperAnchorLeft {
    left: 0;
    right: auto;
  }
  .MuiDrawer-paperAnchorRight {
    left: auto;
    right: 0;
  }
  .MuiDrawer-paperAnchorTop {
    top: 0;
    left: 0;
    right: 0;
    bottom: auto;
    height: auto;
    max-height: 100%;
  }
  .MuiDrawer-paperAnchorBottom {
    top: auto;
    left: 0;
    right: 0;
    bottom: 0;
    height: auto;
    max-height: 100%;
  }
  .MuiDrawer-paperAnchorDockedLeft {
    border-right: 1px solid rgba(255, 255, 255, 0.12);
  }
  .MuiDrawer-paperAnchorDockedTop {
    border-bottom: 1px solid rgba(255, 255, 255, 0.12);
  }
  .MuiDrawer-paperAnchorDockedRight {
    border-left: 1px solid rgba(255, 255, 255, 0.12);
  }
  .MuiDrawer-paperAnchorDockedBottom {
    border-top: 1px solid rgba(255, 255, 255, 0.12);
  }
  .MuiGrid-container {
    width: 100%;
    display: flex;
    flex-wrap: wrap;
    box-sizing: border-box;
  }
  .MuiGrid-item {
    margin: 0;
    box-sizing: border-box;
  }
  .MuiGrid-zeroMinWidth {
    min-width: 0;
  }
  .MuiGrid-direction-xs-column {
    flex-direction: column;
  }
  .MuiGrid-direction-xs-column-reverse {
    flex-direction: column-reverse;
  }
  .MuiGrid-direction-xs-row-reverse {
    flex-direction: row-reverse;
  }
  .MuiGrid-wrap-xs-nowrap {
    flex-wrap: nowrap;
  }
  .MuiGrid-wrap-xs-wrap-reverse {
    flex-wrap: wrap-reverse;
  }
  .MuiGrid-align-items-xs-center {
    align-items: center;
  }
  .MuiGrid-align-items-xs-flex-start {
    align-items: flex-start;
  }
  .MuiGrid-align-items-xs-flex-end {
    align-items: flex-end;
  }
  .MuiGrid-align-items-xs-baseline {
    align-items: baseline;
  }
  .MuiGrid-align-content-xs-center {
    align-content: center;
  }
  .MuiGrid-align-content-xs-flex-start {
    align-content: flex-start;
  }
  .MuiGrid-align-content-xs-flex-end {
    align-content: flex-end;
  }
  .MuiGrid-align-content-xs-space-between {
    align-content: space-between;
  }
  .MuiGrid-align-content-xs-space-around {
    align-content: space-around;
  }
  .MuiGrid-justify-xs-center {
    justify-content: center;
  }
  .MuiGrid-justify-xs-flex-end {
    justify-content: flex-end;
  }
  .MuiGrid-justify-xs-space-between {
    justify-content: space-between;
  }
  .MuiGrid-justify-xs-space-around {
    justify-content: space-around;
  }
  .MuiGrid-justify-xs-space-evenly {
    justify-content: space-evenly;
  }
  .MuiGrid-spacing-xs-1 {
    width: calc(100% + 8px);
    margin: -4px;
  }
  .MuiGrid-spacing-xs-1 > .MuiGrid-item {
    padding: 4px;
  }
  .MuiGrid-spacing-xs-2 {
    width: calc(100% + 16px);
    margin: -8px;
  }
  .MuiGrid-spacing-xs-2 > .MuiGrid-item {
    padding: 8px;
  }
  .MuiGrid-spacing-xs-3 {
    width: calc(100% + 24px);
    margin: -12px;
  }
  .MuiGrid-spacing-xs-3 > .MuiGrid-item {
    padding: 12px;
  }
  .MuiGrid-spacing-xs-4 {
    width: calc(100% + 32px);
    margin: -16px;
  }
  .MuiGrid-spacing-xs-4 > .MuiGrid-item {
    padding: 16px;
  }
  .MuiGrid-spacing-xs-5 {
    width: calc(100% + 40px);
    margin: -20px;
  }
  .MuiGrid-spacing-xs-5 > .MuiGrid-item {
    padding: 20px;
  }
  .MuiGrid-spacing-xs-6 {
    width: calc(100% + 48px);
    margin: -24px;
  }
  .MuiGrid-spacing-xs-6 > .MuiGrid-item {
    padding: 24px;
  }
  .MuiGrid-spacing-xs-7 {
    width: calc(100% + 56px);
    margin: -28px;
  }
  .MuiGrid-spacing-xs-7 > .MuiGrid-item {
    padding: 28px;
  }
  .MuiGrid-spacing-xs-8 {
    width: calc(100% + 64px);
    margin: -32px;
  }
  .MuiGrid-spacing-xs-8 > .MuiGrid-item {
    padding: 32px;
  }
  .MuiGrid-spacing-xs-9 {
    width: calc(100% + 72px);
    margin: -36px;
  }
  .MuiGrid-spacing-xs-9 > .MuiGrid-item {
    padding: 36px;
  }
  .MuiGrid-spacing-xs-10 {
    width: calc(100% + 80px);
    margin: -40px;
  }
  .MuiGrid-spacing-xs-10 > .MuiGrid-item {
    padding: 40px;
  }
  .MuiGrid-grid-xs-auto {
    flex-grow: 0;
    max-width: none;
    flex-basis: auto;
  }
  .MuiGrid-grid-xs-true {
    flex-grow: 1;
    max-width: 100%;
    flex-basis: 0;
  }
  .MuiGrid-grid-xs-1 {
    flex-grow: 0;
    max-width: 8.333333%;
    flex-basis: 8.333333%;
  }
  .MuiGrid-grid-xs-2 {
    flex-grow: 0;
    max-width: 16.666667%;
    flex-basis: 16.666667%;
  }
  .MuiGrid-grid-xs-3 {
    flex-grow: 0;
    max-width: 25%;
    flex-basis: 25%;
  }
  .MuiGrid-grid-xs-4 {
    flex-grow: 0;
    max-width: 33.333333%;
    flex-basis: 33.333333%;
  }
  .MuiGrid-grid-xs-5 {
    flex-grow: 0;
    max-width: 41.666667%;
    flex-basis: 41.666667%;
  }
  .MuiGrid-grid-xs-6 {
    flex-grow: 0;
    max-width: 50%;
    flex-basis: 50%;
  }
  .MuiGrid-grid-xs-7 {
    flex-grow: 0;
    max-width: 58.333333%;
    flex-basis: 58.333333%;
  }
  .MuiGrid-grid-xs-8 {
    flex-grow: 0;
    max-width: 66.666667%;
    flex-basis: 66.666667%;
  }
  .MuiGrid-grid-xs-9 {
    flex-grow: 0;
    max-width: 75%;
    flex-basis: 75%;
  }
  .MuiGrid-grid-xs-10 {
    flex-grow: 0;
    max-width: 83.333333%;
    flex-basis: 83.333333%;
  }
  .MuiGrid-grid-xs-11 {
    flex-grow: 0;
    max-width: 91.666667%;
    flex-basis: 91.666667%;
  }
  .MuiGrid-grid-xs-12 {
    flex-grow: 0;
    max-width: 100%;
    flex-basis: 100%;
  }
@media (min-width:600px) {
  .MuiGrid-grid-sm-auto {
    flex-grow: 0;
    max-width: none;
    flex-basis: auto;
  }
  .MuiGrid-grid-sm-true {
    flex-grow: 1;
    max-width: 100%;
    flex-basis: 0;
  }
  .MuiGrid-grid-sm-1 {
    flex-grow: 0;
    max-width: 8.333333%;
    flex-basis: 8.333333%;
  }
  .MuiGrid-grid-sm-2 {
    flex-grow: 0;
    max-width: 16.666667%;
    flex-basis: 16.666667%;
  }
  .MuiGrid-grid-sm-3 {
    flex-grow: 0;
    max-width: 25%;
    flex-basis: 25%;
  }
  .MuiGrid-grid-sm-4 {
    flex-grow: 0;
    max-width: 33.333333%;
    flex-basis: 33.333333%;
  }
  .MuiGrid-grid-sm-5 {
    flex-grow: 0;
    max-width: 41.666667%;
    flex-basis: 41.666667%;
  }
  .MuiGrid-grid-sm-6 {
    flex-grow: 0;
    max-width: 50%;
    flex-basis: 50%;
  }
  .MuiGrid-grid-sm-7 {
    flex-grow: 0;
    max-width: 58.333333%;
    flex-basis: 58.333333%;
  }
  .MuiGrid-grid-sm-8 {
    flex-grow: 0;
    max-width: 66.666667%;
    flex-basis: 66.666667%;
  }
  .MuiGrid-grid-sm-9 {
    flex-grow: 0;
    max-width: 75%;
    flex-basis: 75%;
  }
  .MuiGrid-grid-sm-10 {
    flex-grow: 0;
    max-width: 83.333333%;
    flex-basis: 83.333333%;
  }
  .MuiGrid-grid-sm-11 {
    flex-grow: 0;
    max-width: 91.666667%;
    flex-basis: 91.666667%;
  }
  .MuiGrid-grid-sm-12 {
    flex-grow: 0;
    max-width: 100%;
    flex-basis: 100%;
  }
}
@media (min-width:960px) {
  .MuiGrid-grid-md-auto {
    flex-grow: 0;
    max-width: none;
    flex-basis: auto;
  }
  .MuiGrid-grid-md-true {
    flex-grow: 1;
    max-width: 100%;
    flex-basis: 0;
  }
  .MuiGrid-grid-md-1 {
    flex-grow: 0;
    max-width: 8.333333%;
    flex-basis: 8.333333%;
  }
  .MuiGrid-grid-md-2 {
    flex-grow: 0;
    max-width: 16.666667%;
    flex-basis: 16.666667%;
  }
  .MuiGrid-grid-md-3 {
    flex-grow: 0;
    max-width: 25%;
    flex-basis: 25%;
  }
  .MuiGrid-grid-md-4 {
    flex-grow: 0;
    max-width: 33.333333%;
    flex-basis: 33.333333%;
  }
  .MuiGrid-grid-md-5 {
    flex-grow: 0;
    max-width: 41.666667%;
    flex-basis: 41.666667%;
  }
  .MuiGrid-grid-md-6 {
    flex-grow: 0;
    max-width: 50%;
    flex-basis: 50%;
  }
  .MuiGrid-grid-md-7 {
    flex-grow: 0;
    max-width: 58.333333%;
    flex-basis: 58.333333%;
  }
  .MuiGrid-grid-md-8 {
    flex-grow: 0;
    max-width: 66.666667%;
    flex-basis: 66.666667%;
  }
  .MuiGrid-grid-md-9 {
    flex-grow: 0;
    max-width: 75%;
    flex-basis: 75%;
  }
  .MuiGrid-grid-md-10 {
    flex-grow: 0;
    max-width: 83.333333%;
    flex-basis: 83.333333%;
  }
  .MuiGrid-grid-md-11 {
    flex-grow: 0;
    max-width: 91.666667%;
    flex-basis: 91.666667%;
  }
  .MuiGrid-grid-md-12 {
    flex-grow: 0;
    max-width: 100%;
    flex-basis: 100%;
  }
}
@media (min-width:1280px) {
  .MuiGrid-grid-lg-auto {
    flex-grow: 0;
    max-width: none;
    flex-basis: auto;
  }
  .MuiGrid-grid-lg-true {
    flex-grow: 1;
    max-width: 100%;
    flex-basis: 0;
  }
  .MuiGrid-grid-lg-1 {
    flex-grow: 0;
    max-width: 8.333333%;
    flex-basis: 8.333333%;
  }
  .MuiGrid-grid-lg-2 {
    flex-grow: 0;
    max-width: 16.666667%;
    flex-basis: 16.666667%;
  }
  .MuiGrid-grid-lg-3 {
    flex-grow: 0;
    max-width: 25%;
    flex-basis: 25%;
  }
  .MuiGrid-grid-lg-4 {
    flex-grow: 0;
    max-width: 33.333333%;
    flex-basis: 33.333333%;
  }
  .MuiGrid-grid-lg-5 {
    flex-grow: 0;
    max-width: 41.666667%;
    flex-basis: 41.666667%;
  }
  .MuiGrid-grid-lg-6 {
    flex-grow: 0;
    max-width: 50%;
    flex-basis: 50%;
  }
  .MuiGrid-grid-lg-7 {
    flex-grow: 0;
    max-width: 58.333333%;
    flex-basis: 58.333333%;
  }
  .MuiGrid-grid-lg-8 {
    flex-grow: 0;
    max-width: 66.666667%;
    flex-basis: 66.666667%;
  }
  .MuiGrid-grid-lg-9 {
    flex-grow: 0;
    max-width: 75%;
    flex-basis: 75%;
  }
  .MuiGrid-grid-lg-10 {
    flex-grow: 0;
    max-width: 83.333333%;
    flex-basis: 83.333333%;
  }
  .MuiGrid-grid-lg-11 {
    flex-grow: 0;
    max-width: 91.666667%;
    flex-basis: 91.666667%;
  }
  .MuiGrid-grid-lg-12 {
    flex-grow: 0;
    max-width: 100%;
    flex-basis: 100%;
  }
}
@media (min-width:1920px) {
  .MuiGrid-grid-xl-auto {
    flex-grow: 0;
    max-width: none;
    flex-basis: auto;
  }
  .MuiGrid-grid-xl-true {
    flex-grow: 1;
    max-width: 100%;
    flex-basis: 0;
  }
  .MuiGrid-grid-xl-1 {
    flex-grow: 0;
    max-width: 8.333333%;
    flex-basis: 8.333333%;
  }
  .MuiGrid-grid-xl-2 {
    flex-grow: 0;
    max-width: 16.666667%;
    flex-basis: 16.666667%;
  }
  .MuiGrid-grid-xl-3 {
    flex-grow: 0;
    max-width: 25%;
    flex-basis: 25%;
  }
  .MuiGrid-grid-xl-4 {
    flex-grow: 0;
    max-width: 33.333333%;
    flex-basis: 33.333333%;
  }
  .MuiGrid-grid-xl-5 {
    flex-grow: 0;
    max-width: 41.666667%;
    flex-basis: 41.666667%;
  }
  .MuiGrid-grid-xl-6 {
    flex-grow: 0;
    max-width: 50%;
    flex-basis: 50%;
  }
  .MuiGrid-grid-xl-7 {
    flex-grow: 0;
    max-width: 58.333333%;
    flex-basis: 58.333333%;
  }
  .MuiGrid-grid-xl-8 {
    flex-grow: 0;
    max-width: 66.666667%;
    flex-basis: 66.666667%;
  }
  .MuiGrid-grid-xl-9 {
    flex-grow: 0;
    max-width: 75%;
    flex-basis: 75%;
  }
  .MuiGrid-grid-xl-10 {
    flex-grow: 0;
    max-width: 83.333333%;
    flex-basis: 83.333333%;
  }
  .MuiGrid-grid-xl-11 {
    flex-grow: 0;
    max-width: 91.666667%;
    flex-basis: 91.666667%;
  }
  .MuiGrid-grid-xl-12 {
    flex-grow: 0;
    max-width: 100%;
    flex-basis: 100%;
  }
}
@media (min-width:0px) and (max-width:599.95px) {
  .PrivateHiddenCss-onlyXs-29 {
    display: none;
  }
}
@media (min-width:0px) {
  .PrivateHiddenCss-xsUp-30 {
    display: none;
  }
}
@media (max-width:599.95px) {
  .PrivateHiddenCss-xsDown-31 {
    display: none;
  }
}
@media (min-width:600px) and (max-width:959.95px) {
  .PrivateHiddenCss-onlySm-32 {
    display: none;
  }
}
@media (min-width:600px) {
  .PrivateHiddenCss-smUp-33 {
    display: none;
  }
}
@media (max-width:959.95px) {
  .PrivateHiddenCss-smDown-34 {
    display: none;
  }
}
@media (min-width:960px) and (max-width:1279.95px) {
  .PrivateHiddenCss-onlyMd-35 {
    display: none;
  }
}
@media (min-width:960px) {
  .PrivateHiddenCss-mdUp-36 {
    display: none;
  }
}
@media (max-width:1279.95px) {
  .PrivateHiddenCss-mdDown-37 {
    display: none;
  }
}
@media (min-width:1280px) and (max-width:1919.95px) {
  .PrivateHiddenCss-onlyLg-38 {
    display: none;
  }
}
@media (min-width:1280px) {
  .PrivateHiddenCss-lgUp-39 {
    display: none;
  }
}
@media (max-width:1919.95px) {
  .PrivateHiddenCss-lgDown-40 {
    display: none;
  }
}
@media (min-width:1920px) {
  .PrivateHiddenCss-onlyXl-41 {
    display: none;
  }
}
@media (min-width:1920px) {
  .PrivateHiddenCss-xlUp-42 {
    display: none;
  }
}
@media (min-width:0px) {
  .PrivateHiddenCss-xlDown-43 {
    display: none;
  }
}
  .MuiList-root {
    margin: 0;
    padding: 0;
    position: relative;
    list-style: none;
  }
  .MuiList-padding {
    padding-top: 8px;
    padding-bottom: 8px;
  }
  .MuiList-subheader {
    padding-top: 0;
  }
  .MuiListItem-root {
    width: 100%;
    display: flex;
    position: relative;
    box-sizing: border-box;
    text-align: left;
    align-items: center;
    padding-top: 8px;
    padding-bottom: 8px;
    justify-content: flex-start;
    text-decoration: none;
  }
  .MuiListItem-root.Mui-focusVisible {
    background-color: rgba(255, 255, 255, 0.16);
  }
  .MuiListItem-root.Mui-selected, .MuiListItem-root.Mui-selected:hover {
    background-color: rgba(255, 255, 255, 0.16);
  }
  .MuiListItem-root.Mui-disabled {
    opacity: 0.5;
  }
  .MuiListItem-container {
    position: relative;
  }
  .MuiListItem-dense {
    padding-top: 4px;
    padding-bottom: 4px;
  }
  .MuiListItem-alignItemsFlexStart {
    align-items: flex-start;
  }
  .MuiListItem-divider {
    border-bottom: 1px solid rgba(255, 255, 255, 0.12);
    background-clip: padding-box;
  }
  .MuiListItem-gutters {
    padding-left: 16px;
    padding-right: 16px;
  }
  .MuiListItem-button {
    transition: background-color 150ms cubic-bezier(0.4, 0, 0.2, 1) 0ms;
  }
  .MuiListItem-button:hover {
    text-decoration: none;
    background-color: rgba(255, 255, 255, 0.08);
  }
@media (hover: none) {
  .MuiListItem-button:hover {
    background-color: transparent;
  }
}
  .MuiListItem-secondaryAction {
    padding-right: 48px;
  }
  .MuiPopover-paper {
    outline: 0;
    position: absolute;
    max-width: calc(100% - 32px);
    min-width: 16px;
    max-height: calc(100% - 32px);
    min-height: 16px;
    overflow-x: hidden;
    overflow-y: auto;
  }
  .MuiSnackbar-root {
    left: 8px;
    right: 8px;
    display: flex;
    z-index: 1400;
    position: fixed;
    align-items: center;
    justify-content: center;
  }
  .MuiSnackbar-anchorOriginTopCenter {
    top: 8px;
  }
@media (min-width:600px) {
  .MuiSnackbar-anchorOriginTopCenter {
    top: 24px;
    left: 50%;
    right: auto;
    transform: translateX(-50%);
  }
}
  .MuiSnackbar-anchorOriginBottomCenter {
    bottom: 8px;
  }
@media (min-width:600px) {
  .MuiSnackbar-anchorOriginBottomCenter {
    left: 50%;
    right: auto;
    bottom: 24px;
    transform: translateX(-50%);
  }
}
  .MuiSnackbar-anchorOriginTopRight {
    top: 8px;
    justify-content: flex-end;
  }
@media (min-width:600px) {
  .MuiSnackbar-anchorOriginTopRight {
    top: 24px;
    left: auto;
    right: 24px;
  }
}
  .MuiSnackbar-anchorOriginBottomRight {
    bottom: 8px;
    justify-content: flex-end;
  }
@media (min-width:600px) {
  .MuiSnackbar-anchorOriginBottomRight {
    left: auto;
    right: 24px;
    bottom: 24px;
  }
}
  .MuiSnackbar-anchorOriginTopLeft {
    top: 8px;
    justify-content: flex-start;
  }
@media (min-width:600px) {
  .MuiSnackbar-anchorOriginTopLeft {
    top: 24px;
    left: 24px;
    right: auto;
  }
}
  .MuiSnackbar-anchorOriginBottomLeft {
    bottom: 8px;
    justify-content: flex-start;
  }
@media (min-width:600px) {
  .MuiSnackbar-anchorOriginBottomLeft {
    left: 24px;
    right: auto;
    bottom: 24px;
  }
}
  .makeStyles-root-1 {
    display: flex;
  }
@media (min-width:600px) {
  .makeStyles-drawer-2 {
    width: 70px;
    flex-shrink: 0;
  }
}
@media (min-width:600px) {
  .makeStyles-appBar-3 {
    width: calc(100% - 70px);
    margin-left: 70px;
  }
}
  .makeStyles-menuButton-4 {
    margin-left: 4px;
  }
@media (min-width:600px) {
  .makeStyles-menuButton-4 {
    display: none;
  }
}
  .makeStyles-toolbar-5 {
    min-height: 56px;
  }
@media (min-width:0px) and (orientation: landscape) {
  .makeStyles-toolbar-5 {
    min-height: 48px;
  }
}
@media (min-width:600px) {
  .makeStyles-toolbar-5 {
    min-height: 64px;
  }
}
  .makeStyles-drawerPaper-6 {
    width: 70px;
  }
  .makeStyles-content-7 {
    padding: 24px;
    flex-grow: 1;
  }
@media (min-width:600px) {
  .makeStyles-dialogStatBox-248 {
    border: 1.5px solid black;
    margin: 5px 5px;
    display: flex;
    padding: 10px 10px;
    min-width: 200px;
    min-height: 100px;
    align-items: center;
    border-radius: 7px;
    flex-direction: column;
    justify-content: center;
  }
}
@media (max-width:599.95px) {
  .makeStyles-dialogStatBox-248 {
    border: 1.5px solid black;
    margin: 5px 5px;
    display: flex;
    padding: 10px 10px;
    min-width: 100px;
    min-height: 100px;
    align-items: center;
    border-radius: 7px;
    flex-direction: column;
    justify-content: space-between;
  }
}
@media (min-width:600px) {
  .makeStyles-mainStat-249 {
    font-size: 1.3rem;
  }
}
@media (max-width:599.95px) {
  .makeStyles-mainStat-249 {
    font-size: 1.1rem;
  }
}
@media (max-width:1279.95px) {
  .makeStyles-hideBelowMd-250 {
    display: none;
  }
}
@media (min-width:960px) {
  .makeStyles-hideBelowMd-250 {
    display: flex;
    align-items: center;
    justify-content: center;
  }
}
@media (max-width:599.95px) {
  .makeStyles-hideBelowMd-250 {
    display: flex;
    align-items: center;
    justify-content: center;
  }
}</style>
          <script src="/static/js/bundle.b9856fcb.js" defer></script>
        <style>
        @font-face {
          font-family: 'Roboto';
          font-style: normal;
          font-weight: 300;
          font-display: swap;
          src: local('Roboto Light'), local('Roboto-Light'), url(https://fonts.gstatic.com/s/roboto/v20/KFOlCnqEu92Fr1MmSU5fCRc4EsA.woff2) format('woff2');
          unicode-range: U+0460-052F, U+1C80-1C88, U+20B4, U+2DE0-2DFF, U+A640-A69F, U+FE2E-FE2F;
        }
        @font-face {
          font-family: 'Roboto';
          font-style: normal;
          font-weight: 400;
          font-display: swap;
          src: local('Roboto'), local('Roboto-Regular'), url(https://fonts.gstatic.com/s/roboto/v20/KFOmCnqEu92Fr1Mu72xKOzY.woff2) format('woff2');
          unicode-range: U+0460-052F, U+1C80-1C88, U+20B4, U+2DE0-2DFF, U+A640-A69F, U+FE2E-FE2F;
        }
        @font-face {
          font-family: 'Roboto';
          font-style: normal;
          font-weight: 500;
          font-display: swap;
          src: local('Roboto Medium'), local('Roboto-Medium'), url(https://fonts.gstatic.com/s/roboto/v20/KFOlCnqEu92Fr1MmEU9fCRc4EsA.woff2) format('woff2');
          unicode-range: U+0460-052F, U+1C80-1C88, U+20B4, U+2DE0-2DFF, U+A640-A69F, U+FE2E-FE2F;
        }
        @font-face {
          font-family: 'Roboto';
          font-style: normal;
          font-weight: 700;
          font-display: swap;
          src: local('Roboto Bold'), local('Roboto-Bold'), url(https://fonts.gstatic.com/s/roboto/v20/KFOlCnqEu92Fr1MmWUlfCRc4EsA.woff2) format('woff2');
          unicode-range: U+0460-052F, U+1C80-1C88, U+20B4, U+2DE0-2DFF, U+A640-A69F, U+FE2E-FE2F;
        }
        @font-face {
          font-family: 'Roboto';
          font-style: normal;
          font-weight: 700;
          font-display: swap;
          src: local('Roboto Bold'), local('Roboto-Bold'), url(https://fonts.gstatic.com/s/roboto/v20/KFOlCnqEu92Fr1MmWUlfABc4EsA.woff2) format('woff2');
          unicode-range: U+0400-045F, U+0490-0491, U+04B0-04B1, U+2116;
        }
        </style>
        
<script>
var _rollbarConfig = {
  accessToken: "d8809ad630f64dbdbbfd3693de95edef",
  captureUncaught: true,
  captureUnhandledRejections: true,
  payload: {
      environment: "production"
  }
};
!function(r){function e(n){if(o[n])return o[n].exports;var t=o[n]={exports:{},id:n,loaded:!1};return r[n].call(t.exports,t,t.exports,e),t.loaded=!0,t.exports}var o={};return e.m=r,e.c=o,e.p="",e(0)}([function(r,e,o){"use strict";var n=o(1),t=o(4);_rollbarConfig=_rollbarConfig||{},_rollbarConfig.rollbarJsUrl=_rollbarConfig.rollbarJsUrl||"https://cdnjs.cloudflare.com/ajax/libs/rollbar.js/2.4.6/rollbar.min.js",_rollbarConfig.async=void 0===_rollbarConfig.async||_rollbarConfig.async;var a=n.setupShim(window,_rollbarConfig),l=t(_rollbarConfig);window.rollbar=n.Rollbar,a.loadFull(window,document,!_rollbarConfig.async,_rollbarConfig,l)},function(r,e,o){"use strict";function n(r){return function(){try{return r.apply(this,arguments)}catch(r){try{console.error("[Rollbar]: Internal error",r)}catch(r){}}}}function t(r,e){this.options=r,this._rollbarOldOnError=null;var o=s++;this.shimId=function(){return o},"undefined"!=typeof window&&window._rollbarShims&&(window._rollbarShims[o]={handler:e,messages:[]})}function a(r,e){if(r){var o=e.globalAlias||"Rollbar";if("object"==typeof r[o])return r[o];r._rollbarShims={},r._rollbarWrappedError=null;var t=new p(e);return n(function(){e.captureUncaught&&(t._rollbarOldOnError=r.onerror,i.captureUncaughtExceptions(r,t,!0),i.wrapGlobals(r,t,!0)),e.captureUnhandledRejections&&i.captureUnhandledRejections(r,t,!0);var n=e.autoInstrument;return e.enabled!==!1&&(void 0===n||n===!0||"object"==typeof n&&n.network)&&r.addEventListener&&(r.addEventListener("load",t.captureLoad.bind(t)),r.addEventListener("DOMContentLoaded",t.captureDomContentLoaded.bind(t))),r[o]=t,t})()}}function l(r){return n(function(){var e=this,o=Array.prototype.slice.call(arguments,0),n={shim:e,method:r,args:o,ts:new Date};window._rollbarShims[this.shimId()].messages.push(n)})}var i=o(2),s=0,d=o(3),c=function(r,e){return new t(r,e)},p=d.bind(null,c);t.prototype.loadFull=function(r,e,o,t,a){var l=function(){var e;if(void 0===r._rollbarDidLoad){e=new Error("rollbar.js did not load");for(var o,n,t,l,i=0;o=r._rollbarShims[i++];)for(o=o.messages||[];n=o.shift();)for(t=n.args||[],i=0;i<t.length;++i)if(l=t[i],"function"==typeof l){l(e);break}}"function"==typeof a&&a(e)},i=!1,s=e.createElement("script"),d=e.getElementsByTagName("script")[0],c=d.parentNode;s.crossOrigin="",s.src=t.rollbarJsUrl,o||(s.async=!0),s.onload=s.onreadystatechange=n(function(){if(!(i||this.readyState&&"loaded"!==this.readyState&&"complete"!==this.readyState)){s.onload=s.onreadystatechange=null;try{c.removeChild(s)}catch(r){}i=!0,l()}}),c.insertBefore(s,d)},t.prototype.wrap=function(r,e,o){try{var n;if(n="function"==typeof e?e:function(){return e||{}},"function"!=typeof r)return r;if(r._isWrap)return r;if(!r._rollbar_wrapped&&(r._rollbar_wrapped=function(){o&&"function"==typeof o&&o.apply(this,arguments);try{return r.apply(this,arguments)}catch(o){var e=o;throw e&&("string"==typeof e&&(e=new String(e)),e._rollbarContext=n()||{},e._rollbarContext._wrappedSource=r.toString(),window._rollbarWrappedError=e),e}},r._rollbar_wrapped._isWrap=!0,r.hasOwnProperty))for(var t in r)r.hasOwnProperty(t)&&(r._rollbar_wrapped[t]=r[t]);return r._rollbar_wrapped}catch(e){return r}};for(var u="log,debug,info,warn,warning,error,critical,global,configure,handleUncaughtException,handleUnhandledRejection,captureEvent,captureDomContentLoaded,captureLoad".split(","),f=0;f<u.length;++f)t.prototype[u[f]]=l(u[f]);r.exports={setupShim:a,Rollbar:p}},function(r,e){"use strict";function o(r,e,o){if(r){var t;"function"==typeof e._rollbarOldOnError?t=e._rollbarOldOnError:r.onerror&&!r.onerror.belongsToShim&&(t=r.onerror,e._rollbarOldOnError=t);var a=function(){var o=Array.prototype.slice.call(arguments,0);n(r,e,t,o)};a.belongsToShim=o,r.onerror=a}}function n(r,e,o,n){r._rollbarWrappedError&&(n[4]||(n[4]=r._rollbarWrappedError),n[5]||(n[5]=r._rollbarWrappedError._rollbarContext),r._rollbarWrappedError=null),e.handleUncaughtException.apply(e,n),o&&o.apply(r,n)}function t(r,e,o){if(r){"function"==typeof r._rollbarURH&&r._rollbarURH.belongsToShim&&r.removeEventListener("unhandledrejection",r._rollbarURH);var n=function(r){var o,n,t;try{o=r.reason}catch(r){o=void 0}try{n=r.promise}catch(r){n="[unhandledrejection] error getting " + promise + " from event"}try{t=r.detail,!o&&t&&(o=t.reason,n=t.promise)}catch(r){t="[unhandledrejection] error getting " + detail + " from event"}o||(o="[unhandledrejection] error getting " + reason + " from event"),e&&e.handleUnhandledRejection&&e.handleUnhandledRejection(o,n)};n.belongsToShim=o,r._rollbarURH=n,r.addEventListener("unhandledrejection",n)}}function a(r,e,o){if(r){var n,t,a="EventTarget,Window,Node,ApplicationCache,AudioTrackList,ChannelMergerNode,CryptoOperation,EventSource,FileReader,HTMLUnknownElement,IDBDatabase,IDBRequest,IDBTransaction,KeyOperation,MediaController,MessagePort,ModalWindow,Notification,SVGElementInstance,Screen,TextTrack,TextTrackCue,TextTrackList,WebSocket,WebSocketWorker,Worker,XMLHttpRequest,XMLHttpRequestEventTarget,XMLHttpRequestUpload".split(",");for(n=0;n<a.length;++n)t=a[n],r[t]&&r[t].prototype&&l(e,r[t].prototype,o)}}function l(r,e,o){if(e.hasOwnProperty&&e.hasOwnProperty("addEventListener")){for(var n=e.addEventListener;n._rollbarOldAdd&&n.belongsToShim;)n=n._rollbarOldAdd;var t=function(e,o,t){n.call(this,e,r.wrap(o),t)};t._rollbarOldAdd=n,t.belongsToShim=o,e.addEventListener=t;for(var a=e.removeEventListener;a._rollbarOldRemove&&a.belongsToShim;)a=a._rollbarOldRemove;var l=function(r,e,o){a.call(this,r,e&&e._rollbar_wrapped||e,o)};l._rollbarOldRemove=a,l.belongsToShim=o,e.removeEventListener=l}}r.exports={captureUncaughtExceptions:o,captureUnhandledRejections:t,wrapGlobals:a}},function(r,e){"use strict";function o(r,e){this.impl=r(e,this),this.options=e,n(o.prototype)}function n(r){for(var e=function(r){return function(){var e=Array.prototype.slice.call(arguments,0);if(this.impl[r])return this.impl[r].apply(this.impl,e)}},o="log,debug,info,warn,warning,error,critical,global,configure,handleUncaughtException,handleUnhandledRejection,_createItem,wrap,loadFull,shimId,captureEvent,captureDomContentLoaded,captureLoad".split(","),n=0;n<o.length;n++)r[o[n]]=e(o[n])}o.prototype._swapAndProcessMessages=function(r,e){this.impl=r(this.options);for(var o,n,t;o=e.shift();)n=o.method,t=o.args,this[n]&&"function"==typeof this[n]&&("captureDomContentLoaded"===n||"captureLoad"===n?this[n].apply(this,[t[0],o.ts]):this[n].apply(this,t));return this},r.exports=o},function(r,e){"use strict";r.exports=function(r){return function(e){if(!e&&!window._rollbarInitialized){r=r||{};for(var o,n,t=r.globalAlias||"Rollbar",a=window.rollbar,l=function(r){return new a(r)},i=0;o=window._rollbarShims[i++];)n||(n=o.handler),o.handler._swapAndProcessMessages(l,o.messages);window[t]=n,window._rollbarInitialized=!0}}}}]);
</script>
      </head>
      <body  >
          <div id="root"><div class="root" data-theme="light"><div class="makeStyles-root-1"><div style="position:fixed;z-index:10"> <button class="MuiButtonBase-root MuiIconButton-root makeStyles-menuButton-4 MuiIconButton-colorInherit MuiIconButton-edgeStart" tabindex="0" type="button" aria-label="open drawer"><span class="MuiIconButton-label"><svg class="MuiSvgIcon-root" focusable="false" viewBox="0 0 24 24" aria-hidden="true"><path d="M3 18h18v-2H3v2zm0-5h18v-2H3v2zm0-7v2h18V6H3z"></path></svg></span></button></div><nav class="makeStyles-drawer-2" aria-label="mailbox folders"><div class="PrivateHiddenCss-smUp-33"></div><div class="PrivateHiddenCss-xsDown-31"><div class="MuiDrawer-root MuiDrawer-docked"><div class="MuiPaper-root MuiDrawer-paper makeStyles-drawerPaper-6 MuiDrawer-paperAnchorLeft MuiDrawer-paperAnchorDockedLeft MuiPaper-elevation0"><div id="sideBar" class="sidebar"><div class="makeStyles-toolbar-5"><div style="height:45px;box-sizing:border-box;padding:10px;text-align:center"><a style="display:inline-block" href="/"><div class="logoIcon"><img src="/static/media/logo_dcoder.93662c17.png" style="height:100%;width:100%;padding:4.5px;box-sizing:border-box"/></div></a></div></div><ul class="MuiList-root MuiList-padding"><div class="MuiButtonBase-root MuiListItem-root MuiListItem-gutters MuiListItem-button" tabindex="0" role="button" aria-disabled="false" style="padding:0"><a style="color:lightgray;text-decoration:none;width:100%" title="Feed" href="/feed"><div class="barIcon"><span class="icon icon-feed"></span><div style="text-align:center;font-size:10px">Feed</div></div></a></div><div class="MuiButtonBase-root MuiListItem-root MuiListItem-gutters MuiListItem-button" tabindex="0" role="button" aria-disabled="false" style="padding:0"><a aria-current="page" class="bg-3" style="color:lightgray;text-decoration:none;width:100%" title="My Files" href="/files"><div class="barIcon"><span class="icon icon-file"></span><div style="text-align:center;font-size:10px">My Files</div></div></a></div><div class="MuiButtonBase-root MuiListItem-root MuiListItem-gutters MuiListItem-button" tabindex="0" role="button" aria-disabled="false" style="padding:0"><a style="color:lightgray;text-decoration:none;width:100%" title="Challenges" href="/challenges"><div class="barIcon"><i class="icon icon-challenge"></i><div style="text-align:center;font-size:10px">Challenges</div></div></a></div><div class="MuiButtonBase-root MuiListItem-root MuiListItem-gutters MuiListItem-button" tabindex="0" role="button" aria-disabled="false" style="padding:0"><a style="color:lightgray;text-decoration:none;width:100%" title="Leaderboard" href="/leaderboard"><div class="barIcon"><span class="icon icon-leaderboard"></span><div style="text-align:center;font-size:10px">Leaderboard</div></div></a></div><div class="MuiButtonBase-root MuiListItem-root MuiListItem-gutters MuiListItem-button" tabindex="0" role="button" aria-disabled="false" style="padding:0"></div></ul><a style="color:lightgray;text-decoration:none;width:100%" href="/signIn"><div style="position:absolute;bottom:10px" class="barIcon last"><i class="fas fa-sign-in-alt"></i><div style="text-align:center;font-size:10px">Sign In</div></div></a></div></div></div></div></nav><div><div style="height:100%;overflow:hidden"></div></div></div><div class="main-container"><div style="height:100%;overflow:hidden"><div class="main-content-header" style="box-sizing:border-box;padding:10px;height:45px;font-weight:bold;border-bottom:1px solid black"><div style="display:flex;cursor:pointer;box-sizing:border-box;height:100%;align-items:center"><div style="font-weight:bold;margin-right:30px"><h1 class="nav-heading text-color" style="margin:0px;font-size:16px">My Files</h1></div><button class="MuiButtonBase-root MuiButton-root MuiButton-contained button-color MuiButton-containedSizeSmall MuiButton-sizeSmall" tabindex="0" type="button" style="margin-right:30px;margin-left:0"><span class="MuiButton-label"><span class="MuiButton-startIcon MuiButton-iconSizeSmall"><i class="fas fa-plus-square">  </i></span>Create file<!-- --> </span></button><button class="MuiButtonBase-root MuiButton-root MuiButton-contained button-color MuiButton-containedSizeSmall MuiButton-sizeSmall" tabindex="0" type="button" style="margin-right:30px"><span class="MuiButton-label"><span class="MuiButton-startIcon MuiButton-iconSizeSmall"><i class="fas fa-plus-square">  </i></span>Create project<!-- --> </span></button><input type="file" id="contained-button-file" style="display:none" directory="" webkitdirectory=""/><div class="text-color" style="position:relative"></div><div style="margin-left:auto"></div></div></div><div class="MuiGrid-root MuiGrid-container" style="height:calc(100vh - 45px)"><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-12 MuiGrid-grid-sm-4 MuiGrid-grid-md-3" style="height:100%;display:block"><div class="side-subnav" style="position:relative;height:100%;max-height:100%"><div style="height:100%;position:relative;visibility:visible"><div style="position:absolute;width:100%;display:none"><img src="data:image/gif;base64,R0lGODlhOAQIAIABAP///wAAACH/C05FVFNDQVBFMi4wAwEAAAAh/wtYTVAgRGF0YVhNUDw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuNi1jMTQ1IDc5LjE2MzQ5OSwgMjAxOC8wOC8xMy0xNjo0MDoyMiAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvIiB4bWxuczp4bXBNTT0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL21tLyIgeG1sbnM6c3RSZWY9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9zVHlwZS9SZXNvdXJjZVJlZiMiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENDIDIwMTkgKFdpbmRvd3MpIiB4bXBNTTpJbnN0YW5jZUlEPSJ4bXAuaWlkOjUyNjIwQzExQkRCRTExRTk5OTQ5OUQxRTVEMDA3OUQxIiB4bXBNTTpEb2N1bWVudElEPSJ4bXAuZGlkOjUyNjIwQzEyQkRCRTExRTk5OTQ5OUQxRTVEMDA3OUQxIj4gPHhtcE1NOkRlcml2ZWRGcm9tIHN0UmVmOmluc3RhbmNlSUQ9InhtcC5paWQ6NTI2MjBDMEZCREJFMTFFOTk5NDk5RDFFNUQwMDc5RDEiIHN0UmVmOmRvY3VtZW50SUQ9InhtcC5kaWQ6NTI2MjBDMTBCREJFMTFFOTk5NDk5RDFFNUQwMDc5RDEiLz4gPC9yZGY6RGVzY3JpcHRpb24+IDwvcmRmOlJERj4gPC94OnhtcG1ldGE+IDw/eHBhY2tldCBlbmQ9InIiPz4B//79/Pv6+fj39vX08/Lx8O/u7ezr6uno5+bl5OPi4eDf3t3c29rZ2NfW1dTT0tHQz87NzMvKycjHxsXEw8LB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" style="height:2px;width:100%;margin-top:0px;display:block"/></div><div style="display:none;height:70px"><div style="width:100%;height:calc(100% - 5px)"><div class="background-color-2 description-text-color" style="display:inline-block;box-sizing:border-box;height:calc(100% - 10px);width:calc(100% - 40px);margin:5px 5px;padding:10px 10px;vertical-align:top;border:1px solid white;border-radius:10px"><div style="display:flex;flex-direction:row;white-space:nowrap;text-overflow:ellipsis;overflow:hidden"><div style="flex-grow:1;cursor:pointer"><div> / <!-- --> points</div><div> / <!-- --> MB Storage</div></div></div></div><div style="display:inline-block;height:100%;margin:1px 0px"><div style="display:flex;flex-direction:column;height:100%"><button class="background-color-2 text-color" style="outline:none;display:inline-block;border:none;border-radius:0px;padding:0px;margin:0px;width:30px;border-top-right-radius:2px;border-bottom-right-radius:2px;height:100%"><i class="fas fa-search"></i></button><button class="background-color-2 text-color" style="outline:none;display:inline-block;cursor:pointer;font-weight:bold;border:none;border-radius:0px;padding-top:5px;margin:0px;width:30px;border-top-right-radius:2px;border-bottom-right-radius:2px;height:100%"><i class="fas fa-sliders-h"></i></button></div></div></div></div><div style="text-align:center;margin:12px 0"></div><div style="padding:5px 10px;display:none"><span class="text-color" style="font-weight:bold;font-size:14px">Sort by<!-- -->:<select class="background-color-2 text-color" style="padding:0px 0px;border:none"><option selected="" value="1">Recent</option><option value="2">Alphabetical</option></select></span></div><div id="fileSection" style="display:block;height:calc(100% - 157px);overflow-y:auto"><div class="description-text-color" style="font-size:13px;padding:30px 20px;text-align:center;box-sizing:border-box;text-decoration:underline">No files available</div></div><div id="searchSection" style="display:none;overflow:auto;height:90%"></div></div></div></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-12 MuiGrid-grid-sm-4 MuiGrid-grid-md-3" style="height:100%;display:none"><div class="side-subnav" style="position:relative;height:100%;max-height:100%;text-align:center;padding-top:30px"><div style="font-weight:bold;font-size:22px;text-align:center;width:100%;top:40%;position:absolute">Looks like you don’t have an account<!-- -->  <span style="cursor:pointer;text-decoration:underline;font-weight:bold">Sign Up</span> for free<div class="description-text-color" style="margin:5px 0px">or</div><span style="cursor:pointer;text-decoration:underline;font-weight:bold">login</span></div></div></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-12 MuiGrid-grid-sm-8 MuiGrid-grid-md-9" style="display:block;height:100%"><div style="position:relative;height:100%"><div style="position:relative;height:calc(100vh - 45px);width:100%"><div class="main-content-body" style="display:block;position:absolute;width:100%;height:100%;z-index:100"><div style="font-weight:bold;font-size:22px;text-align:center;width:100%;top:40%;position:absolute">Looks like you don’t have an account<!-- --> <span style="cursor:pointer;text-decoration:underline;font-weight:bold">Sign Up</span> for free <div class="description-text-color" style="margin:5px 0px">or</div> <span style="cursor:pointer;text-decoration:underline;font-weight:bold"> <!-- -->login</span></div></div><div class="main-content-body" style="display:none;position:absolute;width:100%;height:100vh;z-index:100"><div style="top:49%;position:absolute;width:100%"><img src="data:image/gif;base64,R0lGODlhOAQIAIABAP///wAAACH/C05FVFNDQVBFMi4wAwEAAAAh/wtYTVAgRGF0YVhNUDw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuNi1jMTQ1IDc5LjE2MzQ5OSwgMjAxOC8wOC8xMy0xNjo0MDoyMiAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvIiB4bWxuczp4bXBNTT0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL21tLyIgeG1sbnM6c3RSZWY9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9zVHlwZS9SZXNvdXJjZVJlZiMiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENDIDIwMTkgKFdpbmRvd3MpIiB4bXBNTTpJbnN0YW5jZUlEPSJ4bXAuaWlkOjUyNjIwQzExQkRCRTExRTk5OTQ5OUQxRTVEMDA3OUQxIiB4bXBNTTpEb2N1bWVudElEPSJ4bXAuZGlkOjUyNjIwQzEyQkRCRTExRTk5OTQ5OUQxRTVEMDA3OUQxIj4gPHhtcE1NOkRlcml2ZWRGcm9tIHN0UmVmOmluc3RhbmNlSUQ9InhtcC5paWQ6NTI2MjBDMEZCREJFMTFFOTk5NDk5RDFFNUQwMDc5RDEiIHN0UmVmOmRvY3VtZW50SUQ9InhtcC5kaWQ6NTI2MjBDMTBCREJFMTFFOTk5NDk5RDFFNUQwMDc5RDEiLz4gPC9yZGY6RGVzY3JpcHRpb24+IDwvcmRmOlJERj4gPC94OnhtcG1ldGE+IDw/eHBhY2tldCBlbmQ9InIiPz4B//79/Pv6+fj39vX08/Lx8O/u7ezr6uno5+bl5OPi4eDf3t3c29rZ2NfW1dTT0tHQz87NzMvKycjHxsXEw8LB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" style="height:5px;width:100%;display:block"/></div></div></div></div></div></div><div><div></div><div></div><div></div><div></div><div></div><div></div><div></div><div></div><div></div><div></div><div></div><div></div><div></div><div></div><div></div><div></div><div></div></div></div></div></div></div>
          <script>
          window.__PRELOADED_STATE__ ={"questionList":{"easy":{"message":"question List Page Number 1","page_no":1,"data":[{"_id":"5b6a7a7165139d414b2a52fd","problem_setter":{"id":"5b18fb71be95b1e1644787bc","name":"Mrudul Sankhere"},"level":"easy","title":"Bitwise for Dummies","question":"This is to provide you with an introductory experience of bit-wise operations. There are basically six bit-wise operations in any programming language : - AND(&), OR(|),  XOR(^), NOT(~), left-shift operator(\u003C\u003C) and right-shift operator(\u003E\u003E). You will be given 2 numbers a and b to perform AND, OR and XOR operations and 2 number p and q to perform bit-wise shifting operations(left and right) and a number x to perform the NOT(~) operation. Print the output upon performing these operations each in a newline.","input":"five positive integers a, b, p, q and x separated by a space.","output":"In the three lines, print the output upon performing Bitwise AND, OR, XOR operations respectively on 'a' and 'b'.\nIn the next two lines, print the output of left-shifting 'p' by 'q' bits and right-shifting 'p' by 'q' bits, respectively.\nIn the last line, print the output upon performing the bit-wise NOT operation on 'x'.","constraints":"0 ≤ a, b, p, q, x ≤ 255","sample_input":"2 4 2 1 6","sample_output":"0\n6\n6\n4\n1\n-7","max_marks":6,"approved_at":"2022-07-12T16:43:57.974Z","solved_by":105},{"_id":"5e108869a1312802b296d3a3","problem_setter":{"id":"5de25e832fcfb665c5f6593e","name":"Saurav Chandra"},"level":"easy","title":"Double the Number","question":"Given an array A of size N and K. count all the number of elements such that A[i] * 2 = K.","input":"The first line of the input contains a single integer T denoting the number of test cases.\nThe first line of each test case contains two space separated integer N and K respectively.\nThe second line of each test case contains N space separated integers A[i].","output":"For each test case, print a single line containing count.","constraints":"1 \u003C= T \u003C= 10\n1 \u003C= N, K \u003C= 100\n1 \u003C= A[i] \u003C= 100","sample_input":"1\n7 14\n14 37 7 7 7 40 44","sample_output":"3","max_marks":8,"approved_at":"2022-07-04T07:52:08.109Z","solved_by":183},{"_id":"5dff4233a1312802b296cfab","problem_setter":{"id":"5de25e832fcfb665c5f6593e","name":"Saurav Chandra"},"level":"easy","title":"Rotate Array","question":"You are given an array of N length. You have to rotate the array rightwards by K rotations, that is, shift each element to the right by K positions. Print the rotated array.","input":"First line contains N and K.\nSecond line contains N integers denoting the array.","output":"Print the array after the rotation.","constraints":"1 \u003C= N, K \u003C= 100000\n1 \u003C= Arr[i] \u003C= 10^9","sample_input":"5 2\n1 2 3 4 5\n","sample_output":"4 5 1 2 3\n","max_marks":6,"approved_at":"2021-06-29T04:53:28.483Z","solved_by":1577},{"_id":"5e1086efa1312802b296d39f","problem_setter":{"id":"5de25e832fcfb665c5f6593e","name":"Saurav Chandra"},"level":"easy","title":"Floating Number","question":"Bob has a floating point number N. He wants to set the precision for 2 digits after the decimal point for the number.\nHe is not good at coding, hence looking for your help.","input":"The first line contains T, the number of test cases.\nNext T line contains floating point number N.","output":"Print N in a separate line after setting precision for 2 digits after the decimal point:\n","constraints":"1 \u003C= T \u003C= 1000\n1 \u003C= N \u003C= 10000","sample_input":"1\n713.166\n","sample_output":"713.17\n","max_marks":4,"approved_at":"2020-06-15T14:13:32.171Z","solved_by":5064},{"_id":"5b757d9d791e284892a42b4a","problem_setter":{"id":"5b18fb71be95b1e1644787bc","name":"Mrudul Sankhere"},"level":"easy","title":"SwapMaster solves Symmetric Swap","question":"The SwapMaster is known to be the greatest and fastest swapper of all time. You intend to bring him down and become the new SwapMaster of the city. Through some secret sources, you found out that The SwapMaster undertook yet another task from Dr. Symmetry. The task he undertook is to perform a Symmetric Swap on an array A of numbers. Perform this task before SwapMaster to become the new SwapMaster.\nA Symmetric Swap involves swapping a number in an array with its symmetric position in the array.\nFor example, if you want to swap element at position 2, you will swap it with the 2nd element from the back of the array.","input":"First line contains N, denoting the number of elements in the array A.\nNext line contains N space-separated positive numbers.","output":"Print the array after performing the Symmetric Swap on it.","constraints":"2 ≤ N ≤ 100\n1 ≤ A[i] ≤ 1000","sample_input":"6\n1 2 3 4 5 6","sample_output":"6 5 4 3 2 1","max_marks":4,"approved_at":"2019-12-28T17:27:05.653Z","solved_by":4186},{"_id":"5b211869ac71d7305eae7965","problem_setter":{"id":"5b18fcf7be95b1e1644787c0","name":"Bhanu Nadar"},"level":"easy","title":"String Matching","question":"Cody has a sequence of characters N. He likes a sequence if it contains his favourite sequence as a substring.\nGiven the sequence and his favourite sequence F, check whether the favourite sequence is present in the sequence.","input":"The first line of input contains a single line T, which represents the number of test cases. \nEach test case consists of 2 strings separated by space N and F respectively.","output":"Print \"Yes\" if the sequence contains the favorite sequence in it, otherwise print \"No\".","constraints":"1\u003C=T\u003C=10.\n1\u003C=|N|,|F|\u003C=100.\nAll the characters are lowercase alphabets.","sample_input":"2\nabcde abc\npqrst pr","sample_output":"Yes\nNo","max_marks":3,"approved_at":"2019-12-16T05:53:27.828Z","solved_by":2346},{"_id":"5b28ea8562db8b46ab2ac711","problem_setter":{"id":"5b18fcf7be95b1e1644787c0","name":"Bhanu Nadar"},"level":"easy","title":"Leap Year","question":"Steve is playing a quiz game with his brother John. As Steve just learned the concept of leap year, John wanted to test his knowledge. For that, John started to ask Steve whether a year is a leap year or not by giving him a random year. Steve is little confused and he asks your help to the quiz.\n","input":"The first line of input contains one integer T.\n Next T lines will have years given by John.","output":"For each test case print \"Yes\" if it is a leap year else \"No\".","constraints":"1\u003C=T\u003C=100.\n10^3\u003C=Year\u003C=10^5.","sample_input":"2\n2000\n2017","sample_output":"Yes\nNo","max_marks":6,"approved_at":"2019-11-29T12:29:32.302Z","solved_by":3620},{"_id":"5cf3f4881681076686eade89","problem_setter":{"id":"5cd66e431681076686ea28c6","name":"Rajat Gupta"},"level":"easy","title":"Project Teams","question":"There are N students in a class and Teacher want to divide these students into some groups . Teacher told  that groups consisting of two or less students not allowed , so Teacher want to have as many groups consisting of three or more students as possible.\n\nDivide the students so that the number of groups consisting of three or more students is maximized.","input":"Single integer N\n","output":"Maximum number of groups can be formed","constraints":"1\u003C=N\u003C100000","sample_input":"6","sample_output":"2","max_marks":5,"approved_at":"2019-10-12T09:19:44.526Z","solved_by":4318},{"_id":"5b85bc2bb6415039901fa9d4","problem_setter":{"id":"5b18fb71be95b1e1644787bc","name":"Mrudul Sankhere"},"level":"easy","title":"Circle of Numbers","question":"All numbers in NumberLand are standing in a circle for a dancing ceremony. Every number needs a dancing partner. Dancing partner of any number is the number which is standing radially opposite to it in the circle. The numbers are from 0 to N-1. A certain number X wants to know who will be its dancing partner. Please help X.","input":"Two positive integers denoting the value of N and X.","output":"Print the number radially opposite to X in a circle of N numbers.","constraints":"4 ≤ N ≤ 20\n0 ≤ X \u003C N","sample_input":"8 2","sample_output":"6","max_marks":6,"approved_at":"2019-09-14T08:33:39.093Z","solved_by":2977},{"_id":"5b5ee71361601549b1d0b92b","problem_setter":{"id":"5b18fb71be95b1e1644787bc","name":"Mrudul Sankhere"},"level":"easy","title":"Happy String","question":"A happy string is a string in which each character is lexicographically greater than its next character. You are given a positive integer N as an input. You need to print the smallest lexicographical string possible of length N.\nNOTE: All characters in a happy string are in lowercase.","input":"A single integer N.","output":"Print the lexicographically smallest string of length N.","constraints":"1 ≤ N ≤ 26 ","sample_input":"2","sample_output":"ba","max_marks":4,"approved_at":"2019-09-09T06:22:37.368Z","solved_by":2233}],"count":87,"pages":9,"success":true,"list":[{"_id":"5b6a7a7165139d414b2a52fd","problem_setter":{"id":"5b18fb71be95b1e1644787bc","name":"Mrudul Sankhere"},"level":"easy","title":"Bitwise for Dummies","question":"This is to provide you with an introductory experience of bit-wise operations. There are basically six bit-wise operations in any programming language : - AND(&), OR(|),  XOR(^), NOT(~), left-shift operator(\u003C\u003C) and right-shift operator(\u003E\u003E). You will be given 2 numbers a and b to perform AND, OR and XOR operations and 2 number p and q to perform bit-wise shifting operations(left and right) and a number x to perform the NOT(~) operation. Print the output upon performing these operations each in a newline.","input":"five positive integers a, b, p, q and x separated by a space.","output":"In the three lines, print the output upon performing Bitwise AND, OR, XOR operations respectively on 'a' and 'b'.\nIn the next two lines, print the output of left-shifting 'p' by 'q' bits and right-shifting 'p' by 'q' bits, respectively.\nIn the last line, print the output upon performing the bit-wise NOT operation on 'x'.","constraints":"0 ≤ a, b, p, q, x ≤ 255","sample_input":"2 4 2 1 6","sample_output":"0\n6\n6\n4\n1\n-7","max_marks":6,"approved_at":"2022-07-12T16:43:57.974Z","solved_by":105},{"_id":"5e108869a1312802b296d3a3","problem_setter":{"id":"5de25e832fcfb665c5f6593e","name":"Saurav Chandra"},"level":"easy","title":"Double the Number","question":"Given an array A of size N and K. count all the number of elements such that A[i] * 2 = K.","input":"The first line of the input contains a single integer T denoting the number of test cases.\nThe first line of each test case contains two space separated integer N and K respectively.\nThe second line of each test case contains N space separated integers A[i].","output":"For each test case, print a single line containing count.","constraints":"1 \u003C= T \u003C= 10\n1 \u003C= N, K \u003C= 100\n1 \u003C= A[i] \u003C= 100","sample_input":"1\n7 14\n14 37 7 7 7 40 44","sample_output":"3","max_marks":8,"approved_at":"2022-07-04T07:52:08.109Z","solved_by":183},{"_id":"5dff4233a1312802b296cfab","problem_setter":{"id":"5de25e832fcfb665c5f6593e","name":"Saurav Chandra"},"level":"easy","title":"Rotate Array","question":"You are given an array of N length. You have to rotate the array rightwards by K rotations, that is, shift each element to the right by K positions. Print the rotated array.","input":"First line contains N and K.\nSecond line contains N integers denoting the array.","output":"Print the array after the rotation.","constraints":"1 \u003C= N, K \u003C= 100000\n1 \u003C= Arr[i] \u003C= 10^9","sample_input":"5 2\n1 2 3 4 5\n","sample_output":"4 5 1 2 3\n","max_marks":6,"approved_at":"2021-06-29T04:53:28.483Z","solved_by":1577},{"_id":"5e1086efa1312802b296d39f","problem_setter":{"id":"5de25e832fcfb665c5f6593e","name":"Saurav Chandra"},"level":"easy","title":"Floating Number","question":"Bob has a floating point number N. He wants to set the precision for 2 digits after the decimal point for the number.\nHe is not good at coding, hence looking for your help.","input":"The first line contains T, the number of test cases.\nNext T line contains floating point number N.","output":"Print N in a separate line after setting precision for 2 digits after the decimal point:\n","constraints":"1 \u003C= T \u003C= 1000\n1 \u003C= N \u003C= 10000","sample_input":"1\n713.166\n","sample_output":"713.17\n","max_marks":4,"approved_at":"2020-06-15T14:13:32.171Z","solved_by":5064},{"_id":"5b757d9d791e284892a42b4a","problem_setter":{"id":"5b18fb71be95b1e1644787bc","name":"Mrudul Sankhere"},"level":"easy","title":"SwapMaster solves Symmetric Swap","question":"The SwapMaster is known to be the greatest and fastest swapper of all time. You intend to bring him down and become the new SwapMaster of the city. Through some secret sources, you found out that The SwapMaster undertook yet another task from Dr. Symmetry. The task he undertook is to perform a Symmetric Swap on an array A of numbers. Perform this task before SwapMaster to become the new SwapMaster.\nA Symmetric Swap involves swapping a number in an array with its symmetric position in the array.\nFor example, if you want to swap element at position 2, you will swap it with the 2nd element from the back of the array.","input":"First line contains N, denoting the number of elements in the array A.\nNext line contains N space-separated positive numbers.","output":"Print the array after performing the Symmetric Swap on it.","constraints":"2 ≤ N ≤ 100\n1 ≤ A[i] ≤ 1000","sample_input":"6\n1 2 3 4 5 6","sample_output":"6 5 4 3 2 1","max_marks":4,"approved_at":"2019-12-28T17:27:05.653Z","solved_by":4186},{"_id":"5b211869ac71d7305eae7965","problem_setter":{"id":"5b18fcf7be95b1e1644787c0","name":"Bhanu Nadar"},"level":"easy","title":"String Matching","question":"Cody has a sequence of characters N. He likes a sequence if it contains his favourite sequence as a substring.\nGiven the sequence and his favourite sequence F, check whether the favourite sequence is present in the sequence.","input":"The first line of input contains a single line T, which represents the number of test cases. \nEach test case consists of 2 strings separated by space N and F respectively.","output":"Print \"Yes\" if the sequence contains the favorite sequence in it, otherwise print \"No\".","constraints":"1\u003C=T\u003C=10.\n1\u003C=|N|,|F|\u003C=100.\nAll the characters are lowercase alphabets.","sample_input":"2\nabcde abc\npqrst pr","sample_output":"Yes\nNo","max_marks":3,"approved_at":"2019-12-16T05:53:27.828Z","solved_by":2346},{"_id":"5b28ea8562db8b46ab2ac711","problem_setter":{"id":"5b18fcf7be95b1e1644787c0","name":"Bhanu Nadar"},"level":"easy","title":"Leap Year","question":"Steve is playing a quiz game with his brother John. As Steve just learned the concept of leap year, John wanted to test his knowledge. For that, John started to ask Steve whether a year is a leap year or not by giving him a random year. Steve is little confused and he asks your help to the quiz.\n","input":"The first line of input contains one integer T.\n Next T lines will have years given by John.","output":"For each test case print \"Yes\" if it is a leap year else \"No\".","constraints":"1\u003C=T\u003C=100.\n10^3\u003C=Year\u003C=10^5.","sample_input":"2\n2000\n2017","sample_output":"Yes\nNo","max_marks":6,"approved_at":"2019-11-29T12:29:32.302Z","solved_by":3620},{"_id":"5cf3f4881681076686eade89","problem_setter":{"id":"5cd66e431681076686ea28c6","name":"Rajat Gupta"},"level":"easy","title":"Project Teams","question":"There are N students in a class and Teacher want to divide these students into some groups . Teacher told  that groups consisting of two or less students not allowed , so Teacher want to have as many groups consisting of three or more students as possible.\n\nDivide the students so that the number of groups consisting of three or more students is maximized.","input":"Single integer N\n","output":"Maximum number of groups can be formed","constraints":"1\u003C=N\u003C100000","sample_input":"6","sample_output":"2","max_marks":5,"approved_at":"2019-10-12T09:19:44.526Z","solved_by":4318},{"_id":"5b85bc2bb6415039901fa9d4","problem_setter":{"id":"5b18fb71be95b1e1644787bc","name":"Mrudul Sankhere"},"level":"easy","title":"Circle of Numbers","question":"All numbers in NumberLand are standing in a circle for a dancing ceremony. Every number needs a dancing partner. Dancing partner of any number is the number which is standing radially opposite to it in the circle. The numbers are from 0 to N-1. A certain number X wants to know who will be its dancing partner. Please help X.","input":"Two positive integers denoting the value of N and X.","output":"Print the number radially opposite to X in a circle of N numbers.","constraints":"4 ≤ N ≤ 20\n0 ≤ X \u003C N","sample_input":"8 2","sample_output":"6","max_marks":6,"approved_at":"2019-09-14T08:33:39.093Z","solved_by":2977},{"_id":"5b5ee71361601549b1d0b92b","problem_setter":{"id":"5b18fb71be95b1e1644787bc","name":"Mrudul Sankhere"},"level":"easy","title":"Happy String","question":"A happy string is a string in which each character is lexicographically greater than its next character. You are given a positive integer N as an input. You need to print the smallest lexicographical string possible of length N.\nNOTE: All characters in a happy string are in lowercase.","input":"A single integer N.","output":"Print the lexicographically smallest string of length N.","constraints":"1 ≤ N ≤ 26 ","sample_input":"2","sample_output":"ba","max_marks":4,"approved_at":"2019-09-09T06:22:37.368Z","solved_by":2233}]},"medium":null,"hard":null},"activeQuestion":{"_id":"5b6581c14bc1dd1052db259d","problem_setter":{"id":"5b18fb71be95b1e1644787bc","name":"Mrudul Sankhere"},"level":"medium","title":"Binary Operations","question":"You will be given two numbers, a and b, in their binary form. You need to print their sum and their product in binary.","input":"Two strings separated by space representing the binary values of a and b.","output":"Print their sum(a+b) in the first line.\nPrint their product(a*b) in the second line.","constraints":"1 ≤ string.length ≤ 16","sample_input":"101 10","sample_output":"111\n1010","max_marks":8,"approved_at":"2019-08-07T07:42:06.670Z","solved_by":676},"activeFile":"","editor":{"editorInstance":null,"editorConfig":{"theme":"dark","fontSize":14,"keymap":"sublime"},"outputStatus":false,"editorSetting":false},"leaderBoard":{"list":[{"user_name":"Jiwandono","is_following":false,"is_pending":false,"user_username":"onodnawij","user_image_url":"https:\u002F\u002Fassets.dcoder.tech\u002F57d2652b0c36f26c22060caf\u002Fprofile\u002Fimage57100.png","user_score":1736,"rank":1},{"user_name":"Abhishek Choudhary","is_following":false,"is_pending":false,"user_username":"abbie","user_image_url":"https:\u002F\u002Flh3.googleusercontent.com\u002Fa-\u002FAOh14GiCOFgzUGUKXpp8S07DGztkCJRDvS710R1qLZw8Kyo=s96-c","user_score":1736,"rank":1},{"user_name":"Joseph Millikan","is_following":false,"is_pending":false,"user_username":"jamillikan","user_image_url":"https:\u002F\u002Flh3.googleusercontent.com\u002Fa-\u002FAOh14GjFHCgBmapdjMKwVymRkfEcjPx-7JDXeyT6bIkAa5A=s96-c","user_score":1736,"rank":1},{"user_name":"Jerry Y","is_following":false,"is_pending":false,"user_username":"jerry","user_image_url":"https:\u002F\u002Flh3.googleusercontent.com\u002Fa-\u002FAFdZucppg0xa4sBGH-exmo-S5LWDRDR6SVr8giMJlGDvWw=s96-c","user_score":1736,"rank":1},{"user_name":"GORD X ROHIT","is_following":false,"is_pending":false,"user_username":"gordxrohit","user_image_url":"https:\u002F\u002Flh3.googleusercontent.com\u002Fa-\u002FAFdZucrxuflhBhZh5gcChoPCgZWif55yNfCydGux7l_dag=s96-c","user_score":1736,"rank":1},{"user_name":"Rodrigo Ikegami","is_following":false,"is_pending":false,"user_username":"roike","user_image_url":"https:\u002F\u002Flh3.googleusercontent.com\u002Fa-\u002FAFdZucp5Amkwg4oDktU3XLYTubGGiTTA80VbHndZ9_ID7EI=s96-c","user_score":1736,"rank":1},{"user_name":"Rafli Apriansyah","is_following":false,"is_pending":false,"user_username":"oohgagah","user_image_url":"https:\u002F\u002Flh3.googleusercontent.com\u002Fa-\u002FAFdZucqoNg1-JrfXMB2Vptbts4OoXoULkc_gULTB9hRI=s96-c","user_score":1736,"rank":1},{"user_name":"Yash Mistry","is_following":false,"is_pending":false,"user_username":"yashmistry","user_image_url":"https:\u002F\u002Flh3.googleusercontent.com\u002Fa\u002FAATXAJxH5PfXsX0syyx2h7nK4LNXp3OgQg-nwd6wLcsP=s96-c","user_score":1736,"rank":1},{"user_name":"Ankan Mahapatra","is_following":false,"is_pending":false,"user_username":"ankan2526","user_image_url":"https:\u002F\u002Flh3.googleusercontent.com\u002Fa\u002FAItbvmm6JU99_cz7PQwprPkiHtnRFgpPU-qx7SaP8l8m=s96-c","user_score":1736,"rank":1},{"user_name":"Петар Поповић","is_following":false,"is_pending":false,"user_username":"streberko","user_image_url":"https:\u002F\u002Flh3.googleusercontent.com\u002Fa-\u002FAOh14GjiIE6Tis1gNgvfR-DkIbrZlgQCMS0H-AqQJkKMkw=s300-c","user_score":1731,"rank":10},{"user_name":"LL","is_following":false,"is_pending":false,"user_username":"l_l","user_image_url":"https:\u002F\u002Flh3.googleusercontent.com\u002Fa\u002FAATXAJwj7wyY9g1z77XD7tsfPiuWyDgKww-xnU8Mhd2p=s300-c","user_score":1726,"rank":11},{"user_name":"Luis Pulido","is_following":false,"is_pending":false,"user_username":"nosmirck","user_image_url":"https:\u002F\u002Flh3.googleusercontent.com\u002Fa-\u002FAFdZucrA4S5i9aJSztHgdveG4QTtT2uBkhhyAy799Kavdg=s300-c","user_score":1721,"rank":12},{"user_name":"Владимир Кривенков","is_following":false,"is_pending":false,"user_username":"krovyaka","user_image_url":"https:\u002F\u002Flh3.googleusercontent.com\u002Fa-\u002FAFdZucoVfDmSuXYB2w52dEZBFT1GwijOo5W1qqKFw0TWVQ=s96-c","user_score":1718,"rank":13},{"user_name":"JaredCastro","is_following":false,"is_pending":false,"user_username":"frigolombardi","user_image_url":"https:\u002F\u002Flh3.googleusercontent.com\u002Fa-\u002FAFdZucpwOaP9wNg8zFYpmeeAiNJ50G7P_hB9cLVsQHLiVQ=s96-c","user_score":1705,"rank":14},{"user_name":"B.VIDYADHAR VIJJU","is_following":false,"is_pending":false,"user_username":"bvidyadharvijju","user_image_url":"https:\u002F\u002Fdcoder.tech\u002Favatar\u002Fdev7.png","user_score":1701,"rank":15},{"user_name":"irshad ahmed","is_following":false,"is_pending":false,"user_username":"mr.irshad.siddique","user_image_url":"https:\u002F\u002Flh3.googleusercontent.com\u002Fa-\u002FAOh14Gj7CVgIr0_9icz1bylT_ILx5yzLNBO_55xH-dUF=s300-c","user_score":1695,"rank":16},{"user_name":"Clarence Diwata","is_following":false,"is_pending":false,"user_username":"outofmana","user_image_url":"https:\u002F\u002Flh3.googleusercontent.com\u002Fa-\u002FAOh14GhvINkmEiXscy_Js-vTIbbrxXEWIUtxqBoHcfFAqw=s300-c","user_score":1695,"rank":16},{"user_name":"hoge","is_following":false,"is_pending":false,"user_username":"hoge","user_score":1695,"rank":16},{"user_name":"Arnav Meena","is_following":false,"is_pending":false,"user_username":"arnav900","user_image_url":"https:\u002F\u002Flh3.googleusercontent.com\u002Fa-\u002FAOh14Gi41dLnjjsBtih00mGzrKYYrt-KCLShrlFI7vJ2=s300-c","user_score":1695,"rank":16},{"user_name":"03 ABHINANDAN SHAJU","is_following":false,"is_pending":false,"user_username":"abhinandanshaju","user_image_url":"https:\u002F\u002Flh3.googleusercontent.com\u002Fa-\u002FAOh14GhsrybxTj5ElL1SvW8qKTFBMMFxCK_nacmAE20j=s300-c","user_score":1695,"rank":16},{"user_name":"Sergey","is_following":false,"is_pending":false,"user_username":"sergey1369","user_image_url":"https:\u002F\u002Flh5.googleusercontent.com\u002F-ADYuTuMKiEA\u002FAAAAAAAAAAI\u002FAAAAAAAAAAA\u002FAMZuuck78FvxzQoXIJs30200csywgEyrRA\u002Fs96-c\u002Fphoto.jpg","user_score":1695,"rank":16},{"user_name":"the_nxtgen_boy","is_following":false,"is_pending":false,"user_username":"the_nxtgen_boy","user_image_url":"https:\u002F\u002Fdcoder.tech\u002Favatar\u002Fdev7.png","user_score":1695,"rank":16},{"user_name":"ryan gosling","is_following":false,"is_pending":false,"user_username":"boolgater","user_score":1695,"rank":16},{"user_name":"Akshay Kmr","is_following":false,"is_pending":false,"user_username":"flynnbait","user_image_url":"https:\u002F\u002Flh3.googleusercontent.com\u002Fa-\u002FAOh14GhRWw4NohjCml2qXx4Shi9safYH4cRbM7S5iZmS2Q=s300-c","user_score":1694,"rank":24},{"user_name":"Kititus Boonthaworn","is_following":false,"is_pending":false,"user_username":"flookkititus","user_image_url":"https:\u002F\u002Flh3.googleusercontent.com\u002Fa\u002FAItbvmnTGUf2sJi8uVrUmceCd1eDbF3k24_GZNb3QA9FuQ8=s100","user_score":1691,"rank":25},{"user_name":"Marek K","is_following":false,"is_pending":false,"user_username":"mkulfi2","user_image_url":"https:\u002F\u002Fdcoder.tech\u002Favatar\u002Fdev2.png","user_score":1685,"rank":26},{"user_name":"No Stuff In Mind","is_following":false,"is_pending":false,"user_username":"no_stuff_in_mind","user_image_url":"https:\u002F\u002Fdcoder.tech\u002Favatar\u002Fdev1.png","user_score":1664,"rank":27},{"user_name":"Brice Hirst","is_following":false,"is_pending":false,"user_username":"bricehirst","user_image_url":"https:\u002F\u002Flh3.googleusercontent.com\u002Fa-\u002FAOh14Gj4XxicUiNhqcKS4VIVRwbMUiSdaZdN4gnY1PPu=s96-c","user_score":1662,"rank":28},{"user_name":"Kamaleshwaran P","is_following":false,"is_pending":false,"user_username":"kamaleshwaran","user_image_url":"https:\u002F\u002Flh3.googleusercontent.com\u002Fa-\u002FAOh14Gi2EE3I4BS6Mqg-c3DsfZP3ozvvwCyHtT7YGCZ7mA=s96-c","user_score":1662,"rank":28},{"user_name":"Omkar Patil","is_following":false,"is_pending":false,"user_username":"beastop","user_image_url":"https:\u002F\u002Flh3.googleusercontent.com\u002Fa-\u002FAOh14GgTzpqgAqxfHpO8KYfnVPNbnzCYmXYIk_nioHuihA=s96-c","user_score":1662,"rank":28},{"user_name":"Landa Mohan","is_following":false,"is_pending":false,"user_username":"landamohan","user_image_url":"https:\u002F\u002Fassets.dcoder.tech\u002F5e807b4cfb969e77a658d52a\u002Fprofile\u002F47093.jpg","user_score":1659,"rank":31},{"user_name":"Shubhendra Kushwaha","is_following":false,"is_pending":false,"user_username":"theshubhendra","user_image_url":"https:\u002F\u002Flh3.googleusercontent.com\u002Fa-\u002FAFdZucqhNAWBGTuQdKKekNdY-GjEbui1UhtFn_b5kAE7umA=s96-c","user_score":1654,"rank":32},{"user_name":"Jack O'Donohue","is_following":false,"is_pending":false,"user_username":"jackodonohue41","user_image_url":"https:\u002F\u002Flh5.googleusercontent.com\u002F-wwhB35XM9UA\u002FAAAAAAAAAAI\u002FAAAAAAAAAAA\u002FAAKWJJNVvIIABjwuH0a3_kvaNb1sKhknWA\u002Fs96-c\u002Fphoto.jpg","user_score":1646,"rank":33},{"user_name":"Jonas Alves","is_following":false,"is_pending":false,"user_username":"gauss","user_image_url":"https:\u002F\u002Flh3.googleusercontent.com\u002Fa-\u002FAFdZucq7iUFbBe-AzXkB5elPVSHSFB-kS1gMb-SLOuZ1=s96-c","user_score":1637,"rank":34},{"user_name":"Rodger Dotson","is_following":false,"is_pending":false,"user_username":"bhaddaka","user_image_url":"https:\u002F\u002Flh3.googleusercontent.com\u002Fa-\u002FAOh14Gj4kZMh3TOz1naUmCY8IWmj_MWWj41KPPhZq5g-bQ=s300-c","user_score":1631,"rank":35},{"user_name":"Florent","is_following":false,"is_pending":false,"user_username":"labou77","user_image_url":"http:\u002F\u002Fdcoder.tech\u002Favatar\u002Fdev2.png","user_score":1622,"rank":36},{"user_name":"Ihor Drahushchak","is_following":false,"is_pending":false,"user_username":"dragushhakigor","user_image_url":"https:\u002F\u002Flh3.googleusercontent.com\u002Fa-\u002FAOh14GhpAHO6wanVqW7roB5FXPyga_Pa5wMIA91p7Zztdu8=s96-c","user_score":1611,"rank":37},{"user_name":"VK SINHA","is_following":false,"is_pending":false,"user_username":"vksinha","user_image_url":"https:\u002F\u002Flh3.googleusercontent.com\u002Fa\u002FAATXAJxRK5A2QTmxKUBcV8SM0sE5Gay50XxPith5sQWN=s300-c","user_score":1602,"rank":38},{"user_name":"Adam Walker","is_following":false,"is_pending":false,"user_username":"incursion75","user_image_url":"https:\u002F\u002Flh3.googleusercontent.com\u002Fa-\u002FAOh14GgyYGAS_7-Xks5-83Ccp03QO7U0GDcPQ3Q2SM_CLQ=s96-c","user_score":1601,"rank":39},{"user_name":"Marek Vrana","is_following":false,"is_pending":false,"user_username":"marek.vrana1","user_image_url":"https:\u002F\u002Flh4.googleusercontent.com\u002F-Y7MBqQmhPa0\u002FAAAAAAAAAAI\u002FAAAAAAAAAAA\u002FAMZuucm5xdlxCGRwAH6V_f8tpXqUye8RFQ\u002Fs96-c\u002Fphoto.jpg","user_score":1601,"rank":39},{"user_name":"Shahed Hasan","is_following":false,"is_pending":false,"user_username":"shahedhasan26","user_image_url":"https:\u002F\u002Fassets.dcoder.tech\u002F5f7de6cdf4d821576b991bf9\u002Fprofile\u002FKimi_no_Na_wa-36b5ee7b-41ce-3aa7-963c-3d16b794d62c.jpg","user_score":1595,"rank":41},{"user_name":"Vivek Raj","is_following":false,"is_pending":false,"user_username":"vivekrajsundar","user_image_url":"https:\u002F\u002Flh3.googleusercontent.com\u002Fa-\u002FAOh14Gi8OYq737MGE7enlLcxLjPuD7EFswSazprhKlGLUA=s300-c","user_score":1591,"rank":42},{"user_name":"William Gray","is_following":false,"is_pending":false,"user_username":"wagyourtail","user_image_url":"https:\u002F\u002Flh3.googleusercontent.com\u002Fa-\u002FAFdZuco5BZDklJpJD0b0ZhB66GaF1TdSCIL3e266onHF7g=s96-c","user_score":1581,"rank":43},{"user_name":"Jonathan Berg","is_following":false,"is_pending":false,"user_username":"onlyjb93","user_image_url":"https:\u002F\u002Fassets.dcoder.tech\u002F5b81e13b4c5f8727807076b6\u002Fprofile\u002Fimage7337.jpg","user_score":1572,"rank":44},{"user_name":"Vibhay Singh","is_following":false,"is_pending":false,"user_username":"vibhay_4","user_image_url":"https:\u002F\u002Fdcoder.tech\u002Favatar\u002Fdev2.png","user_score":1570,"rank":45},{"user_name":"Tanish Jain","is_following":false,"is_pending":false,"user_username":"tanishjain10","user_image_url":"https:\u002F\u002Flh3.googleusercontent.com\u002Fa-\u002FAFdZucpN7pG0sLTOAuzf07AIRwqf7UL60O4ttbssZ12Yqg=s96-c","user_score":1563,"rank":46},{"user_name":"angel","is_following":false,"is_pending":false,"user_username":"angel115","user_image_url":"https:\u002F\u002Fdcoder.tech\u002Favatar\u002Fdev3.png","user_score":1560,"rank":47},{"user_name":"Axel Kurniawan","is_following":false,"is_pending":false,"user_username":"axelkurn","user_image_url":"https:\u002F\u002Flh3.googleusercontent.com\u002Fa-\u002FAOh14GhhdOHKP6or29lwt8mmecl0N0kqSEuyFShtU0wqhA=s300-c","user_score":1544,"rank":48},{"user_name":"Mónika Pitz","is_following":false,"is_pending":false,"user_username":"pitzmoni","user_image_url":"https:\u002F\u002Flh3.googleusercontent.com\u002Fa-\u002FAOh14GiR-gIT0IGmMHpukHKJINPjRCzvGhuSN3suWFuGx9A=s96-c","user_score":1536,"rank":49},{"user_name":"Anurag Negi","is_following":false,"is_pending":false,"user_username":"anuragnegi","user_image_url":"https:\u002F\u002Flh3.googleusercontent.com\u002Fa\u002FAATXAJwRQ7ZfYn8PHrx9iKtmaGjOtW35hrFtVZTZBCkw=s96-c","user_score":1535,"rank":50}],"profile":{"data":{"user_languages":["Python","Html","CSS","JavaScript","Php"],"user_score":1694,"user_name":"Akshay Kmr","user_username":"flynnbait","user_image_url":"https:\u002F\u002Flh3.googleusercontent.com\u002Fa-\u002FAOh14GhRWw4NohjCml2qXx4Shi9safYH4cRbM7S5iZmS2Q=s300-c","user_bio":"Started basics from w3schools.com\nNot a computer science student\nKochi\nAda mwonoo code cheyy\nIG: @echo_rapt0r__","isAdvanced":true,"eid":"Uq6TIQ1vZ5TB1mccNsLP3ZnaArk7wcGo","stars":398,"forks":246,"codesin":[{"language_id":400,"percent":"61.40"},{"language_id":24,"percent":"29.82"},{"language_id":1035,"percent":"5.26"},{"language_id":51,"percent":"1.75"},{"language_id":53,"percent":"1.75"}],"public_files":[{"_id":"625ee036c8e0860584f2a317","file":"bg color change.html","language_id":400,"publicAt":"2022-05-14T22:19:55.973Z","title":"Background color change","description":"A simple project for early beginners to learn little things"},{"_id":"623fc328589ac604ae2b5228","file":"am i stupid?.html","language_id":400,"publicAt":"2022-03-27T03:06:07.846Z","title":"Are you stupid?","description":"Inspired from an IG video\nNot a useful project,but helped me to learn new things\nI'm making this public for beginners like me to learn atleast one thing\nSupport me and for similar works,give me a⭐"},{"_id":"623b09034e5b81052e7c6e27","file":"Wrong charector.html","language_id":400,"publicAt":"2022-03-25T17:19:00.736Z","title":"Wrong or invalid","description":"A simple alert when you enter a wrong input,when you type a number in the input specified only for letters"}],"submissions":[{"_id":"60fc165a68179706aeb19b84","score":4,"max_marks":4,"question_id":{"title":"The Report Card!","level":"easy","_id":"57e6ba2312a1bda745dee267"}},{"_id":"60fc1592551302069c10a8d4","score":4,"max_marks":4,"question_id":{"title":"How many weeks","level":"easy","_id":"57a0f4511e1ff69730ed9586"}},{"_id":"60fc154833d8fc17b9f0e1c2","score":4,"max_marks":4,"question_id":{"title":"The shortest Path Algo(Simple)","level":"easy","_id":"57a0fa771e1ff69730ed9590"}}],"algo_progress":{"easySolved":85,"mediumSolved":73,"hardSolved":42,"easyTotal":87,"mediumTotal":74,"hardTotal":43}},"publicFiles":"","submissions":""},"isLoading":false},"notifications":{"allNotifs":{"todayActivity":[],"thisWeekActivity":[],"thisMonthActivity":[],"earlierActivity":[]},"shareReqs":null},"common":{"isLogin":false,"dialogState":null,"theme":{"name":"dark","data":{"navbarBackground":"#050505","editorBackground":"#111111","outputBackgroundColor":"#282923","editorNavbar":"#454642","tabBackground":"#303030","textColor":"#bdbdbd","secondaryTextColor":"#424242","navbarIconColor":"#ffffff","adBackgroundColor":"#303030","editorBottomLineColor":"#272822"}},"publicProfile":{"data":{"followers":{"number":0,"followdata":[{"_id":"60af66aa3aa0d1064124aba6","user":"605725b15614c8067f2be522","accepted":false,"date":"2021-05-27T09:30:18.322Z"}]},"user_app_role":[1],"user_app_badge":[],"user_languages":[],"user_score":0,"unsub_mails":[],"unsub_notifications":[],"unsubmail":false,"user_name":"Godwill E. Baiden","user_email":"godwillebaiden@gmail.com","user_image_url":"https:\u002F\u002Flh3.googleusercontent.com\u002Fa-\u002FAOh14Gj952PEi6zOvbG-6Q6dz7bFQLysGuvc8Jgon7HV=s100","user_country":"gh","user_organization":"University of Ghana","user_profession":"freelancer","user_username":"godwillebaiden","app_version_code":601,"profile_progress":"88%","stars":0,"forks":0,"codesin":[{"language_id":6,"percent":"20.00"},{"language_id":400,"percent":"20.00"},{"language_id":7,"percent":"13.33"},{"language_id":24,"percent":"13.33"},{"language_id":4,"percent":"6.67"},{"language_id":8,"percent":"6.67"},{"language_id":31,"percent":"6.67"},{"language_id":1022,"percent":"6.67"},{"language_id":1035,"percent":"6.67"}],"public_files":[{"_id":"60a0adaea820df504d1bad8c","file":"lista.py","language_id":24,"publicAt":"2022-05-12T05:50:35.976Z","title":"Battle game","description":"A Pokémon style battle game. Have fun!"}],"submissions":null,"algo_progress":{"easySolved":0,"mediumSolved":0,"hardSolved":0,"easyTotal":87,"mediumTotal":74,"hardTotal":43}},"rank":"","countryRank":"","isPremium":false,"isLogin":true}},"feed":{"activeFile":{"_id":"62f392549e5d89054fb54a67","beta_subscription_state":1,"user_id":{"_id":"6094a306b8957f066f1171e7","user_name":"animesh ghoroi","user_username":"animeshghoroi","user_image_url":"https:\u002F\u002Flh3.googleusercontent.com\u002Fa-\u002FAFdZucq_jI8yJylB8fBAl-IEIvdD3hM6w-Z5UuMIMpk=s96-c","app_version_code":615,"id":"6094a306b8957f066f1171e7"},"linked_file":{},"is_template":false,"size":10345,"stars":{"number":0},"forks":{"number":0},"title":"Seven Segment Display using HTML, CSS and JS","description":"seven segment display html css js","tags":["sevenSegmentDisplay","HTML","CSS","JS","project"],"file":"seven_segment_display.html","language_id":400,"updatedAt":"2022-08-10T19:16:34.123Z","createdAt":"2022-08-10T11:11:16.550Z","data":"","is_public":true,"is_linkshare_enabled":true,"is_readmode_default":false,"can_comment":true,"comments":{"number":0}},"feed":{"data":[{"type":1,"codes":[{"_id":"62f29c72e2216e04ef902a43","is_project":false,"linked_blocks":[],"is_template":false,"size":7490,"user_id":{"user_name":"Hacker","user_image_url":"https:\u002F\u002Fassets.dcoder.tech\u002F62c9515bccead905ac6703b5\u002Fprofile\u002FHacker-Background.jpg","user_username":"goswami_kishan","followers":{"number":13},"_id":"62c9515bccead905ac6703b5"},"language_id":400,"file":"very Havey Msg Form.html","public_file":"very Havey Msg Form.html","title":"Very heavy Contact Us Form","description":"I am Goswami kishan bharthi.\nI am website developer.","tags":["#hacker","#contact","u"],"createdAt":"2022-08-09T17:42:10.698Z","updatedAt":"2022-08-09T17:44:23.306Z","stars":{"number":7},"forks":{"number":4},"commentCount":0,"is_public":true,"has_errors":false,"fs_resource_type":1},{"_id":"62f3dd579e5d89054fb593cb","is_project":false,"linked_blocks":[],"is_template":false,"size":2643,"user_id":{"user_name":"Jeran Christopher D. Merino","user_image_url":"https:\u002F\u002Flh3.googleusercontent.com\u002Fa-\u002FAFdZucq63D2h5gHtlc1XpN6W5uWQzY4Nh8GZq8cuzgetsQ=s300-c","user_username":"jeranmerino147","followers":{"number":89},"_id":"60a3707db156135027a5f4d2"},"language_id":400,"file":"Sample Style Sheet.html","public_file":"Sample Style Sheet.html","title":"Sample Style Sheet","description":"Sample Style sheet that only use html basics I'm still learning html :)","tags":["Html","Sheets","Style"],"createdAt":"2022-08-10T16:31:19.013Z","updatedAt":"2022-08-10T16:42:19.004Z","stars":{"number":1},"forks":{"number":0},"commentCount":0,"is_public":true,"has_errors":false,"fs_resource_type":1},{"_id":"62f0fcb02a31ff050b6a1f2d","is_project":false,"linked_blocks":[],"is_template":false,"size":1814,"user_id":{"user_name":"animesh ghoroi","user_image_url":"https:\u002F\u002Flh3.googleusercontent.com\u002Fa-\u002FAFdZucq_jI8yJylB8fBAl-IEIvdD3hM6w-Z5UuMIMpk=s96-c","user_username":"animeshghoroi","followers":{"number":2},"_id":"6094a306b8957f066f1171e7"},"language_id":400,"file":"bulb.html","public_file":"bulb.html","title":"html project bulb switch on off ","description":"html,css project","tags":["html","css","project","bulb","switch","button"],"createdAt":"2022-08-08T12:08:16.316Z","updatedAt":"2022-08-11T04:16:19.499Z","stars":{"number":3},"forks":{"number":1},"commentCount":1,"is_public":true,"has_errors":false,"fs_resource_type":1}],"challenges":null},{"type":4,"codes":null,"challenges":[{"_id":"5b2138c1ac71d7305eae7a2b","problem_setter":{"id":"5b18fcf7be95b1e1644787c0","name":"Bhanu Nadar"},"level":"hard","title":"Range Update, Range Queries","question":"John is fond of arrays. John's teacher told him to do two types of operation on array A.\n1. q l r: In this query, you need to print the minimum number in the sub-array A[l]....to A[r].\n2. q l r p: In this query, John needs to add p to all the elements of sub-array A[l] to A[r]. \n\"q\" is equal to 1 for 1st type of queries and 2 for the second type of queries.","input":"The first line of the test case contains two integers, N: size of array A and Q: number of queries.\nThe second line contains N space-separated integers, elements of A.\nNext Q lines contain one of the two queries.","output":"For each type 1 query, print the minimum element in the sub-array A[l]...toA[r].","constraints":"1\u003C=N,Q,p\u003C=1000.\n1\u003C=l,r\u003C=N.\n1\u003C=q\u003C=2.","sample_input":"5 5\n1 5 2 4 3\n1 1 5\n1 1 3\n2 3 5 2\n1 3 5\n1 1 5","sample_output":"1\n1\n4\n1","max_marks":15,"approved_at":"2022-07-12T16:48:34.185Z","solved_by":31},{"_id":"5b6a7a7165139d414b2a52fd","problem_setter":{"id":"5b18fb71be95b1e1644787bc","name":"Mrudul Sankhere"},"level":"easy","title":"Bitwise for Dummies","question":"This is to provide you with an introductory experience of bit-wise operations. There are basically six bit-wise operations in any programming language : - AND(&), OR(|),  XOR(^), NOT(~), left-shift operator(\u003C\u003C) and right-shift operator(\u003E\u003E). You will be given 2 numbers a and b to perform AND, OR and XOR operations and 2 number p and q to perform bit-wise shifting operations(left and right) and a number x to perform the NOT(~) operation. Print the output upon performing these operations each in a newline.","input":"five positive integers a, b, p, q and x separated by a space.","output":"In the three lines, print the output upon performing Bitwise AND, OR, XOR operations respectively on 'a' and 'b'.\nIn the next two lines, print the output of left-shifting 'p' by 'q' bits and right-shifting 'p' by 'q' bits, respectively.\nIn the last line, print the output upon performing the bit-wise NOT operation on 'x'.","constraints":"0 ≤ a, b, p, q, x ≤ 255","sample_input":"2 4 2 1 6","sample_output":"0\n6\n6\n4\n1\n-7","max_marks":6,"approved_at":"2022-07-12T16:43:57.974Z","solved_by":105},{"_id":"5e108869a1312802b296d3a3","problem_setter":{"id":"5de25e832fcfb665c5f6593e","name":"Saurav Chandra"},"level":"easy","title":"Double the Number","question":"Given an array A of size N and K. count all the number of elements such that A[i] * 2 = K.","input":"The first line of the input contains a single integer T denoting the number of test cases.\nThe first line of each test case contains two space separated integer N and K respectively.\nThe second line of each test case contains N space separated integers A[i].","output":"For each test case, print a single line containing count.","constraints":"1 \u003C= T \u003C= 10\n1 \u003C= N, K \u003C= 100\n1 \u003C= A[i] \u003C= 100","sample_input":"1\n7 14\n14 37 7 7 7 40 44","sample_output":"3","max_marks":8,"approved_at":"2022-07-04T07:52:08.109Z","solved_by":183},{"_id":"5e08a5d2a1312802b296d217","problem_setter":{"id":"5de25e832fcfb665c5f6593e","name":"Saurav Chandra"},"level":"medium","title":"Wrestling Championship","question":"Hulk is participating in a wrestling championship. The contest consists of N fighters including Hulk. The contest is of several stages. At each stage, if number of fighters are X, then there are X\u002F2 fights and X\u002F2 fighters move on to the next sage. Since, Hulk is hungry, he can't wait for contest to be over. He has asked you to calculate the number of hours he'll have to wait for contest to be over if each fight is of 1 hour each.\nNote-- Initial number of fighters will always be a power of 2, i.e., N = 2^x, where x is a positive integer.\n","input":"First line consists of T, number of test cases.\nEach of the next T lines consists of single integer N, number of initial fighters.\n","output":"For each test case, print one integer denoting the time in hours.\n","constraints":"1 \u003C= T \u003C= 10\n1 \u003C= N \u003C= 10^9","sample_input":"2\n8\n16","sample_output":"7\n15","max_marks":12,"approved_at":"2022-07-04T07:51:53.718Z","solved_by":77}]},{"type":2,"codes":[{"_id":"62ee6049c3601f0507f8f390","is_project":false,"linked_blocks":[],"is_template":false,"size":19208,"user_id":{"user_name":"Sutan Tan","user_image_url":"https:\u002F\u002Flh3.googleusercontent.com\u002Fa\u002FAItbvmkEVOFwH9ptO9yG81Lhs2sijobVIxHKMaupeHKM=s300-c","user_username":"sutantan84","followers":{"number":0},"_id":"62ee5f6dc3601f0507f8f30e"},"language_id":400,"file":"ganteng.html","public_file":"ganteng.html","title":"stumble guys 3D","description":"sksjdjdjhdhdhdhhdhdhddhdhdhdhhddhdhdhhdhdhdhdhdhdhdhhdvebdhshd","tags":["#stumbleguys"],"createdAt":"2022-08-06T12:36:25.368Z","updatedAt":"2022-08-06T13:23:11.041Z","stars":{"number":10},"forks":{"number":3},"commentCount":0,"is_public":true,"has_errors":false,"icon_url":"https:\u002F\u002Fassets.dcoder.tech\u002F62ee5f6dc3601f0507f8f30e\u002F62ee6049c3601f0507f8f390\u002F62ee6049c3601f0507f8f390.jpg","fs_resource_type":1},{"_id":"62e2a19671f86006c88bd181","is_project":false,"linked_blocks":[],"is_template":false,"size":4062,"user_id":{"user_name":"Team YouTube","user_image_url":"https:\u002F\u002Flh3.googleusercontent.com\u002Fa-\u002FAFdZucpGxsVC-a0jo6_laMSvU7w5f9yFX7ZoDV-iSIMDGA=s300-c","user_username":"dev.ayu","followers":{"number":29},"_id":"62e29e1c71f86006c88bc7e8"},"language_id":400,"file":"Glass morphism Login Page For Website.html","public_file":"Glass morphism.html","title":"Login Form Glass Morphism Design","description":"I Hope You Liked It\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n","tags":["#coders","#coading","#glass","#glassmorphism","#front","#end","#like","#trending","#website","#login","#form"],"createdAt":"2022-07-28T14:47:50.776Z","updatedAt":"2022-08-05T16:25:40.574Z","stars":{"number":58},"forks":{"number":36},"commentCount":8,"is_public":true,"has_errors":false,"icon_url":"https:\u002F\u002Fassets.dcoder.tech\u002F62e29e1c71f86006c88bc7e8\u002F62e2a19671f86006c88bd181\u002F62e2a19671f86006c88bd181.webp","fs_resource_type":1},{"_id":"62f0cdb8c3601f0507fad01c","is_project":false,"linked_blocks":[],"is_template":false,"size":1932,"user_id":{"user_name":"jackpas","user_username":"jackronn","followers":{"number":2},"_id":"62dbaaa3dfd8350568d12c79"},"language_id":24,"file":"interactive_rock_paper_scissors.py","public_file":"interactive_rock_paper_scissors.py","title":"rock paper scissors","description":"-ground breaking discovery. \na whole new interactive game which you can play with a computer with computer as the opponent ","tags":["python","games","imnotpopular"],"createdAt":"2022-08-08T08:47:52.779Z","updatedAt":"2022-08-09T13:17:27.128Z","stars":{"number":2},"forks":{"number":0},"commentCount":0,"is_public":true,"has_errors":false,"output":{"data_type":1,"data":"commands:\n 'rock','paper','scissors'.  \n-type like this only\n to stop -'stop'\nto check scores say -'score'\nplayer: stop\ncomputer: bye mate\n"},"fs_resource_type":1}],"challenges":null},{"type":3,"codes":[{"_id":"62ddb90ccae57805203dbef7","is_project":false,"linked_blocks":[],"is_template":false,"size":2928,"user_id":{"user_name":"Ansh Mittal","user_image_url":"https:\u002F\u002Fassets.dcoder.tech\u002F61750bbedf55eb19ed2d722e\u002Fprofile\u002FIMG_20220718_213620.jpg","user_username":"anshmit657","followers":{"number":48},"_id":"61750bbedf55eb19ed2d722e"},"language_id":400,"file":"Facebook_login page.html","public_file":"Facebook_login page.html","title":"Facebook Login page","description":"Hello developers....\nI  made a facebook login page  which are very similar to Facebook login page.\nIf you like this give me a star and \n------------------ Follow ---------------","tags":["html","css","facebook","loginpage","decoder","#html","#css","#facebook","#decoder"],"createdAt":"2022-07-24T21:26:36.908Z","updatedAt":"2022-07-29T13:08:25.849Z","stars":{"number":58},"forks":{"number":23},"commentCount":5,"is_public":true,"has_errors":false,"fs_resource_type":1}],"challenges":null},{"type":3,"codes":[{"_id":"62decb700d75130577f05e5f","is_project":false,"linked_blocks":[],"is_template":false,"size":47074,"user_id":{"user_name":"Arnolds","user_username":"arnoldslv","followers":{"number":8},"_id":"62de75eb8bb651057dddda62"},"language_id":400,"file":"portfolio.html","public_file":"portfolio.html","title":"Portfolio without picures","description":"Portfolio website example made by me. Included html, CSS and JavaScript\n","tags":["Portfolio","css","website"],"createdAt":"2022-07-25T16:57:20.606Z","updatedAt":"2022-07-25T17:09:10.145Z","stars":{"number":31},"forks":{"number":17},"commentCount":0,"is_public":true,"has_errors":false,"fs_resource_type":1}],"challenges":null}],"pages":3,"isLoading":false,"searchData":"","searchPages":""},"mode":4},"myProject":{"projects":{}},"sharedFiles":{"files":{"list":null,"count":null,"isLoading":false,"searchData":null,"searchPages":null}},"myFiles":{"files":{"list":null,"count":null,"isLoading":false,"searchData":null,"searchPages":null},"mode":"","activeFile":""},"notification":{"isOpen":false,"message":""},"usageStats":{"creditsAndStorageUsage":{},"creditsHistory":{}},"currentProject":{"isConfig":true,"langConfig":null,"boostConfig":null,"projectMode":null,"creditUsage":null,"projectId":null,"isEditorDisabled":false,"isPanelExpanded":false},"terminalLayout":1,"showTerminal":false,"deviceId":null,"reqURL":"http:\u002F\u002Fcode.dcoder.tech \u002Ffiles\u002Fcode\u002F62f4628cf78fc7055031b247\u002Fmuhammad-zen"}
          </script>
          <script>
            if ('serviceWorker' in navigator) {
              window.addEventListener('load', function() {
                navigator.serviceWorker.register('/service-worker.js').then(function(registration) {
                  // Registration was successful
                  console.log('ServiceWorker registration successful with scope: ', registration.scope);
                }, function(err) {
                  // registration failed :(
                  console.log('ServiceWorker registration failed: ', err);
                }).catch(function(err) {
                  console.log(err)
                });
              });
            } else {
              console.log('service worker is not supported');
            }
          </script>
          <script src="https://code.jquery.com/jquery-3.3.1.min.js"></script>
      </body>
  </html>