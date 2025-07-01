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

#include "OAIGuildPreviewResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIGuildPreviewResponse::OAIGuildPreviewResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIGuildPreviewResponse::OAIGuildPreviewResponse() {
    this->initializeModel();
}

OAIGuildPreviewResponse::~OAIGuildPreviewResponse() {}

void OAIGuildPreviewResponse::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_features_isSet = false;
    m_features_isValid = false;

    m_approximate_member_count_isSet = false;
    m_approximate_member_count_isValid = false;

    m_approximate_presence_count_isSet = false;
    m_approximate_presence_count_isValid = false;

    m_emojis_isSet = false;
    m_emojis_isValid = false;

    m_stickers_isSet = false;
    m_stickers_isValid = false;

    m_icon_isSet = false;
    m_icon_isValid = false;

    m_description_isSet = false;
    m_description_isValid = false;

    m_home_header_isSet = false;
    m_home_header_isValid = false;

    m_splash_isSet = false;
    m_splash_isValid = false;

    m_discovery_splash_isSet = false;
    m_discovery_splash_isValid = false;
}

void OAIGuildPreviewResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIGuildPreviewResponse::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::dc_rest::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_name_isValid = ::dc_rest::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_features_isValid = ::dc_rest::fromJsonValue(m_features, json[QString("features")]);
    m_features_isSet = !json[QString("features")].isNull() && m_features_isValid;

    m_approximate_member_count_isValid = ::dc_rest::fromJsonValue(m_approximate_member_count, json[QString("approximate_member_count")]);
    m_approximate_member_count_isSet = !json[QString("approximate_member_count")].isNull() && m_approximate_member_count_isValid;

    m_approximate_presence_count_isValid = ::dc_rest::fromJsonValue(m_approximate_presence_count, json[QString("approximate_presence_count")]);
    m_approximate_presence_count_isSet = !json[QString("approximate_presence_count")].isNull() && m_approximate_presence_count_isValid;

    m_emojis_isValid = ::dc_rest::fromJsonValue(m_emojis, json[QString("emojis")]);
    m_emojis_isSet = !json[QString("emojis")].isNull() && m_emojis_isValid;

    m_stickers_isValid = ::dc_rest::fromJsonValue(m_stickers, json[QString("stickers")]);
    m_stickers_isSet = !json[QString("stickers")].isNull() && m_stickers_isValid;

    m_icon_isValid = ::dc_rest::fromJsonValue(m_icon, json[QString("icon")]);
    m_icon_isSet = !json[QString("icon")].isNull() && m_icon_isValid;

    m_description_isValid = ::dc_rest::fromJsonValue(m_description, json[QString("description")]);
    m_description_isSet = !json[QString("description")].isNull() && m_description_isValid;

    m_home_header_isValid = ::dc_rest::fromJsonValue(m_home_header, json[QString("home_header")]);
    m_home_header_isSet = !json[QString("home_header")].isNull() && m_home_header_isValid;

    m_splash_isValid = ::dc_rest::fromJsonValue(m_splash, json[QString("splash")]);
    m_splash_isSet = !json[QString("splash")].isNull() && m_splash_isValid;

    m_discovery_splash_isValid = ::dc_rest::fromJsonValue(m_discovery_splash, json[QString("discovery_splash")]);
    m_discovery_splash_isSet = !json[QString("discovery_splash")].isNull() && m_discovery_splash_isValid;
}

QString OAIGuildPreviewResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIGuildPreviewResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::dc_rest::toJsonValue(m_id));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::dc_rest::toJsonValue(m_name));
    }
    if (m_features.size() > 0) {
        obj.insert(QString("features"), ::dc_rest::toJsonValue(m_features));
    }
    if (m_approximate_member_count_isSet) {
        obj.insert(QString("approximate_member_count"), ::dc_rest::toJsonValue(m_approximate_member_count));
    }
    if (m_approximate_presence_count_isSet) {
        obj.insert(QString("approximate_presence_count"), ::dc_rest::toJsonValue(m_approximate_presence_count));
    }
    if (m_emojis.size() > 0) {
        obj.insert(QString("emojis"), ::dc_rest::toJsonValue(m_emojis));
    }
    if (m_stickers.size() > 0) {
        obj.insert(QString("stickers"), ::dc_rest::toJsonValue(m_stickers));
    }
    if (m_icon_isSet) {
        obj.insert(QString("icon"), ::dc_rest::toJsonValue(m_icon));
    }
    if (m_description_isSet) {
        obj.insert(QString("description"), ::dc_rest::toJsonValue(m_description));
    }
    if (m_home_header_isSet) {
        obj.insert(QString("home_header"), ::dc_rest::toJsonValue(m_home_header));
    }
    if (m_splash_isSet) {
        obj.insert(QString("splash"), ::dc_rest::toJsonValue(m_splash));
    }
    if (m_discovery_splash_isSet) {
        obj.insert(QString("discovery_splash"), ::dc_rest::toJsonValue(m_discovery_splash));
    }
    return obj;
}

QString OAIGuildPreviewResponse::getId() const {
    return m_id;
}
void OAIGuildPreviewResponse::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIGuildPreviewResponse::is_id_Set() const{
    return m_id_isSet;
}

bool OAIGuildPreviewResponse::is_id_Valid() const{
    return m_id_isValid;
}

QString OAIGuildPreviewResponse::getName() const {
    return m_name;
}
void OAIGuildPreviewResponse::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAIGuildPreviewResponse::is_name_Set() const{
    return m_name_isSet;
}

bool OAIGuildPreviewResponse::is_name_Valid() const{
    return m_name_isValid;
}

QSet<QString> OAIGuildPreviewResponse::getFeatures() const {
    return m_features;
}
void OAIGuildPreviewResponse::setFeatures(const QSet<QString> &features) {
    m_features = features;
    m_features_isSet = true;
}

bool OAIGuildPreviewResponse::is_features_Set() const{
    return m_features_isSet;
}

bool OAIGuildPreviewResponse::is_features_Valid() const{
    return m_features_isValid;
}

qint32 OAIGuildPreviewResponse::getApproximateMemberCount() const {
    return m_approximate_member_count;
}
void OAIGuildPreviewResponse::setApproximateMemberCount(const qint32 &approximate_member_count) {
    m_approximate_member_count = approximate_member_count;
    m_approximate_member_count_isSet = true;
}

bool OAIGuildPreviewResponse::is_approximate_member_count_Set() const{
    return m_approximate_member_count_isSet;
}

bool OAIGuildPreviewResponse::is_approximate_member_count_Valid() const{
    return m_approximate_member_count_isValid;
}

qint32 OAIGuildPreviewResponse::getApproximatePresenceCount() const {
    return m_approximate_presence_count;
}
void OAIGuildPreviewResponse::setApproximatePresenceCount(const qint32 &approximate_presence_count) {
    m_approximate_presence_count = approximate_presence_count;
    m_approximate_presence_count_isSet = true;
}

bool OAIGuildPreviewResponse::is_approximate_presence_count_Set() const{
    return m_approximate_presence_count_isSet;
}

bool OAIGuildPreviewResponse::is_approximate_presence_count_Valid() const{
    return m_approximate_presence_count_isValid;
}

QList<OAIEmojiResponse> OAIGuildPreviewResponse::getEmojis() const {
    return m_emojis;
}
void OAIGuildPreviewResponse::setEmojis(const QList<OAIEmojiResponse> &emojis) {
    m_emojis = emojis;
    m_emojis_isSet = true;
}

bool OAIGuildPreviewResponse::is_emojis_Set() const{
    return m_emojis_isSet;
}

bool OAIGuildPreviewResponse::is_emojis_Valid() const{
    return m_emojis_isValid;
}

QList<OAIGuildStickerResponse> OAIGuildPreviewResponse::getStickers() const {
    return m_stickers;
}
void OAIGuildPreviewResponse::setStickers(const QList<OAIGuildStickerResponse> &stickers) {
    m_stickers = stickers;
    m_stickers_isSet = true;
}

bool OAIGuildPreviewResponse::is_stickers_Set() const{
    return m_stickers_isSet;
}

bool OAIGuildPreviewResponse::is_stickers_Valid() const{
    return m_stickers_isValid;
}

QString OAIGuildPreviewResponse::getIcon() const {
    return m_icon;
}
void OAIGuildPreviewResponse::setIcon(const QString &icon) {
    m_icon = icon;
    m_icon_isSet = true;
}

bool OAIGuildPreviewResponse::is_icon_Set() const{
    return m_icon_isSet;
}

bool OAIGuildPreviewResponse::is_icon_Valid() const{
    return m_icon_isValid;
}

QString OAIGuildPreviewResponse::getDescription() const {
    return m_description;
}
void OAIGuildPreviewResponse::setDescription(const QString &description) {
    m_description = description;
    m_description_isSet = true;
}

bool OAIGuildPreviewResponse::is_description_Set() const{
    return m_description_isSet;
}

bool OAIGuildPreviewResponse::is_description_Valid() const{
    return m_description_isValid;
}

QString OAIGuildPreviewResponse::getHomeHeader() const {
    return m_home_header;
}
void OAIGuildPreviewResponse::setHomeHeader(const QString &home_header) {
    m_home_header = home_header;
    m_home_header_isSet = true;
}

bool OAIGuildPreviewResponse::is_home_header_Set() const{
    return m_home_header_isSet;
}

bool OAIGuildPreviewResponse::is_home_header_Valid() const{
    return m_home_header_isValid;
}

QString OAIGuildPreviewResponse::getSplash() const {
    return m_splash;
}
void OAIGuildPreviewResponse::setSplash(const QString &splash) {
    m_splash = splash;
    m_splash_isSet = true;
}

bool OAIGuildPreviewResponse::is_splash_Set() const{
    return m_splash_isSet;
}

bool OAIGuildPreviewResponse::is_splash_Valid() const{
    return m_splash_isValid;
}

QString OAIGuildPreviewResponse::getDiscoverySplash() const {
    return m_discovery_splash;
}
void OAIGuildPreviewResponse::setDiscoverySplash(const QString &discovery_splash) {
    m_discovery_splash = discovery_splash;
    m_discovery_splash_isSet = true;
}

bool OAIGuildPreviewResponse::is_discovery_splash_Set() const{
    return m_discovery_splash_isSet;
}

bool OAIGuildPreviewResponse::is_discovery_splash_Valid() const{
    return m_discovery_splash_isValid;
}

bool OAIGuildPreviewResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_features.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_approximate_member_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_approximate_presence_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_emojis.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_stickers.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_icon_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_home_header_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_splash_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_discovery_splash_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIGuildPreviewResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_name_isValid && m_features_isValid && m_approximate_member_count_isValid && m_approximate_presence_count_isValid && m_emojis_isValid && m_stickers_isValid && true;
}

} // namespace dc_rest
