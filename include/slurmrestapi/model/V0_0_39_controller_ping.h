/**
 * Slurm REST API
 * API to access and control Slurm
 *
 * The version of the OpenAPI document: Slurm-24.05.5&openapi/dbv0.0.39&openapi/slurmctld&openapi/slurmdbd&openapi/v0.0.39
 * Contact: sales@schedmd.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.10.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * V0_0_39_controller_ping.h
 *
 * 
 */

#ifndef HM_SLURM_CLIENT_MODEL_V0_0_39_controller_ping_H_
#define HM_SLURM_CLIENT_MODEL_V0_0_39_controller_ping_H_


#include "slurmrestapi/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace hm {
namespace slurm {
namespace client {
namespace model {



/// <summary>
/// 
/// </summary>
class  V0_0_39_controller_ping
    : public ModelBase
{
public:
    V0_0_39_controller_ping();
    virtual ~V0_0_39_controller_ping();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_39_controller_ping members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getHostname() const;
    bool hostnameIsSet() const;
    void unsetHostname();

    void setHostname(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getPinged() const;
    bool pingedIsSet() const;
    void unsetPinged();

    void setPinged(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    int64_t getLatency() const;
    bool latencyIsSet() const;
    void unsetLatency();

    void setLatency(int64_t value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getMode() const;
    bool modeIsSet() const;
    void unsetMode();

    void setMode(const utility::string_t& value);


protected:
    utility::string_t m_Hostname;
    bool m_HostnameIsSet;
    utility::string_t m_Pinged;
    bool m_PingedIsSet;
    int64_t m_Latency;
    bool m_LatencyIsSet;
    utility::string_t m_Mode;
    bool m_ModeIsSet;
};


}
}
}
}

#endif /* HM_SLURM_CLIENT_MODEL_V0_0_39_controller_ping_H_ */
