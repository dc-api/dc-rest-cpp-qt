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

#include "OAIBasicApplicationResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIBasicApplicationResponse::OAIBasicApplicationResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIBasicApplicationResponse::OAIBasicApplicationResponse() {
    this->initializeModel();
}

OAIBasicApplicationResponse::~OAIBasicApplicationResponse() {}

void OAIBasicApplicationResponse::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_description_isSet = false;
    m_description_isValid = false;

    m_icon_isSet = false;
    m_icon_isValid = false;

    m_type_isSet = false;
    m_type_isValid = false;

    m_cover_image_isSet = false;
    m_cover_image_isValid = false;

    m_primary_sku_id_isSet = false;
    m_primary_sku_id_isValid = false;

    m_bot_isSet = false;
    m_bot_isValid = false;
}

void OAIBasicApplicationResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIBasicApplicationResponse::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::dc_rest::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_name_isValid = ::dc_rest::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_description_isValid = ::dc_rest::fromJsonValue(m_description, json[QString("description")]);
    m_description_isSet = !json[QString("description")].isNull() && m_description_isValid;

    m_icon_isValid = ::dc_rest::fromJsonValue(m_icon, json[QString("icon")]);
    m_icon_isSet = !json[QString("icon")].isNull() && m_icon_isValid;

    m_type_isValid = ::dc_rest::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_cover_image_isValid = ::dc_rest::fromJsonValue(m_cover_image, json[QString("cover_image")]);
    m_cover_image_isSet = !json[QString("cover_image")].isNull() && m_cover_image_isValid;

    m_primary_sku_id_isValid = ::dc_rest::fromJsonValue(m_primary_sku_id, json[QString("primary_sku_id")]);
    m_primary_sku_id_isSet = !json[QString("primary_sku_id")].isNull() && m_primary_sku_id_isValid;

    m_bot_isValid = ::dc_rest::fromJsonValue(m_bot, json[QString("bot")]);
    m_bot_isSet = !json[QString("bot")].isNull() && m_bot_isValid;
}

QString OAIBasicApplicationResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIBasicApplicationResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::dc_rest::toJsonValue(m_id));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::dc_rest::toJsonValue(m_name));
    }
    if (m_description_isSet) {
        obj.insert(QString("description"), ::dc_rest::toJsonValue(m_description));
    }
    if (m_icon_isSet) {
        obj.insert(QString("icon"), ::dc_rest::toJsonValue(m_icon));
    }
    if (m_type_isSet) {
        obj.insert(QString("type"), ::dc_rest::toJsonValue(m_type));
    }
    if (m_cover_image_isSet) {
        obj.insert(QString("cover_image"), ::dc_rest::toJsonValue(m_cover_image));
    }
    if (m_primary_sku_id_isSet) {
        obj.insert(QString("primary_sku_id"), ::dc_rest::toJsonValue(m_primary_sku_id));
    }
    if (m_bot.isSet()) {
        obj.insert(QString("bot"), ::dc_rest::toJsonValue(m_bot));
    }
    return obj;
}

QString OAIBasicApplicationResponse::getId() const {
    return m_id;
}
void OAIBasicApplicationResponse::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIBasicApplicationResponse::is_id_Set() const{
    return m_id_isSet;
}

bool OAIBasicApplicationResponse::is_id_Valid() const{
    return m_id_isValid;
}

QString OAIBasicApplicationResponse::getName() const {
    return m_name;
}
void OAIBasicApplicationResponse::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAIBasicApplicationResponse::is_name_Set() const{
    return m_name_isSet;
}

bool OAIBasicApplicationResponse::is_name_Valid() const{
    return m_name_isValid;
}

QString OAIBasicApplicationResponse::getDescription() const {
    return m_description;
}
void OAIBasicApplicationResponse::setDescription(const QString &description) {
    m_description = description;
    m_description_isSet = true;
}

bool OAIBasicApplicationResponse::is_description_Set() const{
    return m_description_isSet;
}

bool OAIBasicApplicationResponse::is_description_Valid() const{
    return m_description_isValid;
}

QString OAIBasicApplicationResponse::getIcon() const {
    return m_icon;
}
void OAIBasicApplicationResponse::setIcon(const QString &icon) {
    m_icon = icon;
    m_icon_isSet = true;
}

bool OAIBasicApplicationResponse::is_icon_Set() const{
    return m_icon_isSet;
}

bool OAIBasicApplicationResponse::is_icon_Valid() const{
    return m_icon_isValid;
}

qint32 OAIBasicApplicationResponse::getType() const {
    return m_type;
}
void OAIBasicApplicationResponse::setType(const qint32 &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIBasicApplicationResponse::is_type_Set() const{
    return m_type_isSet;
}

bool OAIBasicApplicationResponse::is_type_Valid() const{
    return m_type_isValid;
}

QString OAIBasicApplicationResponse::getCoverImage() const {
    return m_cover_image;
}
void OAIBasicApplicationResponse::setCoverImage(const QString &cover_image) {
    m_cover_image = cover_image;
    m_cover_image_isSet = true;
}

bool OAIBasicApplicationResponse::is_cover_image_Set() const{
    return m_cover_image_isSet;
}

bool OAIBasicApplicationResponse::is_cover_image_Valid() const{
    return m_cover_image_isValid;
}

QString OAIBasicApplicationResponse::getPrimarySkuId() const {
    return m_primary_sku_id;
}
void OAIBasicApplicationResponse::setPrimarySkuId(const QString &primary_sku_id) {
    m_primary_sku_id = primary_sku_id;
    m_primary_sku_id_isSet = true;
}

bool OAIBasicApplicationResponse::is_primary_sku_id_Set() const{
    return m_primary_sku_id_isSet;
}

bool OAIBasicApplicationResponse::is_primary_sku_id_Valid() const{
    return m_primary_sku_id_isValid;
}

OAIUserResponse OAIBasicApplicationResponse::getBot() const {
    return m_bot;
}
void OAIBasicApplicationResponse::setBot(const OAIUserResponse &bot) {
    m_bot = bot;
    m_bot_isSet = true;
}

bool OAIBasicApplicationResponse::is_bot_Set() const{
    return m_bot_isSet;
}

bool OAIBasicApplicationResponse::is_bot_Valid() const{
    return m_bot_isValid;
}

bool OAIBasicApplicationResponse::isSet() const {
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

        if (m_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_icon_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_cover_image_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_primary_sku_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_bot.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIBasicApplicationResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_name_isValid && m_description_isValid && true;
}

} // namespace dc_rest
