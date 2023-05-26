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
 * Dbv0_0_38_meta.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_38_meta_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_38_meta_H_


#include "slurmrestapi/ModelBase.h"

#include "slurmrestapi/model/V0_0_38_meta_Slurm.h"
#include "slurmrestapi/model/V0_0_38_meta_plugin.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

class V0_0_38_meta_plugin;
class V0_0_38_meta_Slurm;

/// <summary>
/// 
/// </summary>
class  Dbv0_0_38_meta
    : public ModelBase
{
public:
    Dbv0_0_38_meta();
    virtual ~Dbv0_0_38_meta();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Dbv0_0_38_meta members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_38_meta_plugin> getPlugin() const;
    bool pluginIsSet() const;
    void unsetPlugin();

    void setPlugin(const std::shared_ptr<V0_0_38_meta_plugin>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_38_meta_Slurm> getSlurm() const;
    bool slurmIsSet() const;
    void unsetSlurm();

    void setSlurm(const std::shared_ptr<V0_0_38_meta_Slurm>& value);


protected:
    std::shared_ptr<V0_0_38_meta_plugin> m_Plugin;
    bool m_PluginIsSet;
    std::shared_ptr<V0_0_38_meta_Slurm> m_Slurm;
    bool m_SlurmIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_38_meta_H_ */
