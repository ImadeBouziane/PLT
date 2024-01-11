// Command.cpp


#include "Command.h"
#include "state/PlayerID.h"


namespace engine {

    // Constructor
    Command::Command() = default;

    // Destructor
    Command::~Command() = default;

    // Getter for CommandTypeId
    CommandTypeId Command::getCommandTypeId() {
        return commandTypeId ;
    }

    // Execute method
   /* void Command::executeCommand(Command command) {

        this->execute();
    }*/

    // Serialize method
    void Command::serialize() {

    }

    bool Command::check(state::Game &state) {
        return authorPlayer==state.turnPlayer;
    }


} // namespace engine*
