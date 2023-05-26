/**
 * Slurm Rest API
 * API to access and control Slurm.
 *
 * The version of the OpenAPI document: 0.0.38
 * Contact: sales@schedmd.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.6.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * V0_0_38_ping.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_38_ping_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_38_ping_H_


#include "slurmrestapi/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  V0_0_38_ping
    : public ModelBase
{
public:
    V0_0_38_ping();
    virtual ~V0_0_38_ping();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_38_ping members

    /// <summary>
    /// slurm controller hostname
    /// </summary>
    utility::string_t getHostname() const;
    bool hostnameIsSet() const;
    void unsetHostname();

    void setHostname(const utility::string_t& value);

    /// <summary>
    /// slurm controller host up
    /// </summary>
    utility::string_t getPing() const;
    bool pingIsSet() const;
    void unsetPing();

    void setPing(const utility::string_t& value);

    /// <summary>
    /// slurm controller mode
    /// </summary>
    utility::string_t getMode() const;
    bool modeIsSet() const;
    void unsetMode();

    void setMode(const utility::string_t& value);

    /// <summary>
    /// slurm controller status
    /// </summary>
    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetStatus();

    void setStatus(int32_t value);


protected:
    utility::string_t m_Hostname;
    bool m_HostnameIsSet;
    utility::string_t m_Ping;
    bool m_PingIsSet;
    utility::string_t m_Mode;
    bool m_ModeIsSet;
    int32_t m_Status;
    bool m_StatusIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_38_ping_H_ */
