//
// Created by kobi on 12/26/18.
//

#ifndef HOGL_LIB_BUILDER_HPP
#define HOGL_LIB_BUILDER_HPP

namespace hogl {

    class config final {
    public:
        uint32_t _output_bufsize;

        std::string _output_filename;

        output _output;

        mask  _mask;
    };

    class config_builder_base {
    protected:
        config& _cfg;
    };

}

#endif //HOGL_LIB_BUILDER_HPP
