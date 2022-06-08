
const char html_menu_root[] PROGMEM = R"====(
<div>
    <form action='/setup' method='get'>
        <button>_TXT_SETUP_</button>
    </form>
</div>
<div>
    <form action='/status' method='get'>
        <button>_TXT_STATUS_</button>
    </form>
</div>
<div>
    <form action='/upgrade' method='get'>
        <button>_TXT_FW_UPGRADE_</button>
    </form>
</div>
<div>
    <form>
        <button type='submit' name='REBOOT' class='button bred'>_TXT_REBOOT_</button>
    </form>
</div>
<div id="logout" style="display:none">
    <form action='/login?LOGOUT=YES' method='post'>
        <button type='submit' name='Logout' class='button bred'>_TXT_LOGOUT_</button>
    </form>
</div>
<script>
    if (_SHOW_LOGOUT_) {
        document.getElementById("logout").style.display = "";
    }
    if (_SHOW_CONTROL_) {
        document.getElementById("control").style.display = "";
    }
</script>
)====";


const char html_menu_setup[] PROGMEM = R"====(
<p>
    <form action='/mqtt' method='get'>
        <button>_TXT_MQTT_</button>
    </form>
</p>
<p>
    <form action='/wifi' method='get'>
        <button>_TXT_WIFI_</button>
    </form>
</p>
<p>
    <form action='/telegram' method='get'>
        <button>_TXT_TELEGRAM_</button>
    </form>
</p>
<p>
    <form action='/watchdog' method='get'>
        <button>_TXT_WATCHDOG_</button>
    </form>
</p>
<p>
    <form action='/debug' method='get'>
        <button>_TXT_DEBUG_</button>
    </form>
</p>
<p>
    <form onsubmit="return confirm(' _TXT_RESETCONFIRM_ ');">
        <button type='submit' name='RESET' class='button bred'>_TXT_RESET_</button>
    </form>
</p>
<p>
    <form action='/' method='get'>
        <button>_TXT_BACK_</button>
    </form>
</p>
)====";
