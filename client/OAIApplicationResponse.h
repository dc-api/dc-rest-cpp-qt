/**
 * Discord HTTP API (Preview) - REST API Client
 * Preview of the Discord v10 HTTP API specification. See https://discord.com/developers/docs for more details.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 10
 * - **Modified**: 2025-07-01T06:33:49.033017897Z[Etc/UTC]
 * - **Generator Version**: 7.14.0
 *
 * <details>
 * <summary><strong>⚠️ Important Disclaimer & Limitation of Liability</strong></summary>
 * <br>
 * > **IMPORTANT**: This software is provided "as is" without any warranties, express or implied, including but not limited
 * > to warranties of merchantability, fitness for a particular purpose, or non-infringement. The developers, contributors,
 * > and licensors (collectively, "Developers") make no representations regarding the accuracy, completeness, or reliability
 * > of this software or its outputs.
 * >
 * > This client is not intended to provide financial, investment, tax, or legal advice. It facilitates interaction with the
 * > Discord HTTP API (Preview) service but does not endorse or recommend any financial actions, including the purchase, sale, or holding of
 * > financial instruments (e.g., stocks, bonds, derivatives, cryptocurrencies). Users must consult qualified financial or
 * > legal professionals before making decisions based on this software's outputs.
 * >
 * > Financial markets are inherently speculative and carry significant risks. Using this software in trading, analysis, or
 * > other financial activities may result in substantial losses, including total loss of capital. The Developers are not
 * > liable for any losses or damages arising from such use. Users assume full responsibility for validating the software's
 * > outputs and ensuring their suitability for intended purposes.
 * >
 * > This client may rely on third-party data or services (e.g., market feeds, APIs). The Developers do not control or verify
 * > the accuracy of these services and are not liable for any errors, delays, or losses resulting from their use. Users must
 * > comply with third-party terms and conditions.
 * >
 * > Users are solely responsible for ensuring compliance with all applicable financial, tax, and regulatory requirements in
 * > their jurisdiction. This includes obtaining necessary licenses or approvals for trading or investment activities. The
 * > Developers disclaim liability for any legal consequences arising from non-compliance.
 * >
 * > To the fullest extent permitted by law, the Developers shall not be liable for any direct, indirect, incidental,
 * > consequential, or punitive damages arising from the use or inability to use this software, including but not limited to
 * > loss of profits, data, or business opportunities.
 *
 * </details>
 */

/*
 * OAIApplicationResponse.h
 *
 * 
 */

#ifndef OAIApplicationResponse_H
#define OAIApplicationResponse_H

#include <QJsonObject>

#include "OAIApplicationIntegrationTypeConfigurationResponse.h"
#include "OAIApplicationOAuth2InstallParamsResponse.h"
#include "OAIUserResponse.h"
#include <QList>
#include <QMap>
#include <QSet>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace dc_rest {
class OAIUserResponse;
class OAIApplicationOAuth2InstallParamsResponse;
class OAIApplicationIntegrationTypeConfigurationResponse;

class OAIApplicationResponse : public OAIObject {
public:
    OAIApplicationResponse();
    OAIApplicationResponse(QString json);
    ~OAIApplicationResponse() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getId() const;
    void setId(const QString &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

    QString getDescription() const;
    void setDescription(const QString &description);
    bool is_description_Set() const;
    bool is_description_Valid() const;

    QString getVerifyKey() const;
    void setVerifyKey(const QString &verify_key);
    bool is_verify_key_Set() const;
    bool is_verify_key_Valid() const;

    qint32 getFlags() const;
    void setFlags(const qint32 &flags);
    bool is_flags_Set() const;
    bool is_flags_Valid() const;

    QString getIcon() const;
    void setIcon(const QString &icon);
    bool is_icon_Set() const;
    bool is_icon_Valid() const;

    qint32 getType() const;
    void setType(const qint32 &type);
    bool is_type_Set() const;
    bool is_type_Valid() const;

    QString getCoverImage() const;
    void setCoverImage(const QString &cover_image);
    bool is_cover_image_Set() const;
    bool is_cover_image_Valid() const;

    QString getPrimarySkuId() const;
    void setPrimarySkuId(const QString &primary_sku_id);
    bool is_primary_sku_id_Set() const;
    bool is_primary_sku_id_Valid() const;

    OAIUserResponse getBot() const;
    void setBot(const OAIUserResponse &bot);
    bool is_bot_Set() const;
    bool is_bot_Valid() const;

    QString getSlug() const;
    void setSlug(const QString &slug);
    bool is_slug_Set() const;
    bool is_slug_Valid() const;

    QString getGuildId() const;
    void setGuildId(const QString &guild_id);
    bool is_guild_id_Set() const;
    bool is_guild_id_Valid() const;

    QList<QString> getRpcOrigins() const;
    void setRpcOrigins(const QList<QString> &rpc_origins);
    bool is_rpc_origins_Set() const;
    bool is_rpc_origins_Valid() const;

    bool isBotPublic() const;
    void setBotPublic(const bool &bot_public);
    bool is_bot_public_Set() const;
    bool is_bot_public_Valid() const;

    bool isBotRequireCodeGrant() const;
    void setBotRequireCodeGrant(const bool &bot_require_code_grant);
    bool is_bot_require_code_grant_Set() const;
    bool is_bot_require_code_grant_Valid() const;

    QString getTermsOfServiceUrl() const;
    void setTermsOfServiceUrl(const QString &terms_of_service_url);
    bool is_terms_of_service_url_Set() const;
    bool is_terms_of_service_url_Valid() const;

    QString getPrivacyPolicyUrl() const;
    void setPrivacyPolicyUrl(const QString &privacy_policy_url);
    bool is_privacy_policy_url_Set() const;
    bool is_privacy_policy_url_Valid() const;

    QString getCustomInstallUrl() const;
    void setCustomInstallUrl(const QString &custom_install_url);
    bool is_custom_install_url_Set() const;
    bool is_custom_install_url_Valid() const;

    OAIApplicationOAuth2InstallParamsResponse getInstallParams() const;
    void setInstallParams(const OAIApplicationOAuth2InstallParamsResponse &install_params);
    bool is_install_params_Set() const;
    bool is_install_params_Valid() const;

    QMap<QString, OAIApplicationIntegrationTypeConfigurationResponse> getIntegrationTypesConfig() const;
    void setIntegrationTypesConfig(const QMap<QString, OAIApplicationIntegrationTypeConfigurationResponse> &integration_types_config);
    bool is_integration_types_config_Set() const;
    bool is_integration_types_config_Valid() const;

    qint32 getMaxParticipants() const;
    void setMaxParticipants(const qint32 &max_participants);
    bool is_max_participants_Set() const;
    bool is_max_participants_Valid() const;

    QSet<QString> getTags() const;
    void setTags(const QSet<QString> &tags);
    bool is_tags_Set() const;
    bool is_tags_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_id;
    bool m_id_isSet;
    bool m_id_isValid;

    QString m_name;
    bool m_name_isSet;
    bool m_name_isValid;

    QString m_description;
    bool m_description_isSet;
    bool m_description_isValid;

    QString m_verify_key;
    bool m_verify_key_isSet;
    bool m_verify_key_isValid;

    qint32 m_flags;
    bool m_flags_isSet;
    bool m_flags_isValid;

    QString m_icon;
    bool m_icon_isSet;
    bool m_icon_isValid;

    qint32 m_type;
    bool m_type_isSet;
    bool m_type_isValid;

    QString m_cover_image;
    bool m_cover_image_isSet;
    bool m_cover_image_isValid;

    QString m_primary_sku_id;
    bool m_primary_sku_id_isSet;
    bool m_primary_sku_id_isValid;

    OAIUserResponse m_bot;
    bool m_bot_isSet;
    bool m_bot_isValid;

    QString m_slug;
    bool m_slug_isSet;
    bool m_slug_isValid;

    QString m_guild_id;
    bool m_guild_id_isSet;
    bool m_guild_id_isValid;

    QList<QString> m_rpc_origins;
    bool m_rpc_origins_isSet;
    bool m_rpc_origins_isValid;

    bool m_bot_public;
    bool m_bot_public_isSet;
    bool m_bot_public_isValid;

    bool m_bot_require_code_grant;
    bool m_bot_require_code_grant_isSet;
    bool m_bot_require_code_grant_isValid;

    QString m_terms_of_service_url;
    bool m_terms_of_service_url_isSet;
    bool m_terms_of_service_url_isValid;

    QString m_privacy_policy_url;
    bool m_privacy_policy_url_isSet;
    bool m_privacy_policy_url_isValid;

    QString m_custom_install_url;
    bool m_custom_install_url_isSet;
    bool m_custom_install_url_isValid;

    OAIApplicationOAuth2InstallParamsResponse m_install_params;
    bool m_install_params_isSet;
    bool m_install_params_isValid;

    QMap<QString, OAIApplicationIntegrationTypeConfigurationResponse> m_integration_types_config;
    bool m_integration_types_config_isSet;
    bool m_integration_types_config_isValid;

    qint32 m_max_participants;
    bool m_max_participants_isSet;
    bool m_max_participants_isValid;

    QSet<QString> m_tags;
    bool m_tags_isSet;
    bool m_tags_isValid;
};

} // namespace dc_rest

Q_DECLARE_METATYPE(dc_rest::OAIApplicationResponse)

#endif // OAIApplicationResponse_H
