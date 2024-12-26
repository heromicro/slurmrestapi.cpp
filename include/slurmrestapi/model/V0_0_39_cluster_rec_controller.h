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
 * V0_0_39_cluster_rec_controller.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_39_cluster_rec_controller_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_39_cluster_rec_controller_H_


#include "slurmrestapi/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {



/// <summary>
/// 
/// </summary>
class  V0_0_39_cluster_rec_controller
    : public ModelBase
{
public:
    V0_0_39_cluster_rec_controller();
    virtual ~V0_0_39_cluster_rec_controller();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_39_cluster_rec_controller members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getHost() const;
    bool hostIsSet() const;
    void unsetHost();

    void setHost(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getPort() const;
    bool portIsSet() const;
    void unsetPort();

    void setPort(int32_t value);


protected:
    utility::string_t m_Host;
    bool m_HostIsSet;
    int32_t m_Port;
    bool m_PortIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_39_cluster_rec_controller_H_ */
